/* CTR-mode encryption
 * Copyright (C) 2011-2013 Arne Bochem
 *   Georg-August-Universitaet Goettingen
 *   Institut fuer Informatik
 *   Telematics Group
 *   Sensorlab
 * All rights reserved.
 */

/* See: "Comments to NIST concerning AES Modes of Operations: CTR-Mode
 * Encryption" by Helger Lipmaa, Phillip Rogaway and David Wagner. */

module CTRModeM
{
	provides
	{
		interface BlockCipherMode;
		command uint64_t get_counter(CipherModeContext *context);
		command void set_counter(CipherModeContext *context, uint64_t ctr);
	}
	uses
	{
		interface BlockCipher;
		interface BlockCipherInfo;
	}
} 

/* Only ciphers with a block size of 8 or 16 are supported by this implemen-
 * tation.  Please ensure that you change the key after sending 2^64 blocks to
 * avoid repetition of counter values. */

implementation
{
	typedef struct CTRModeContext
	{
		uint64_t ctr;
		uint64_t dec;
		uint8_t dec_skip;
		uint8_t ok;
		uint8_t bs;
	} __attribute__ ((packed)) CTRModeContext;

	command error_t BlockCipherMode.init(CipherModeContext *context, uint8_t key_size, uint8_t *key)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		CipherContext *cctx = &(context->cc);
		error_t res;
		uint8_t bs;

		/* As long as keys are not reused, initializing the counter to 0 is safe. */
		mctx->ctr = 0;
		mctx->ok = 0;

		bs = call BlockCipherInfo.getPreferredBlockSize();
		/* if (bs < 1 || bs > 16) - Fancy block sizes might not be a good idea. */
		if (bs != 8 && bs != 16)
			return FAIL;

		if ((res = call BlockCipher.init(cctx, bs, key_size, key)) == SUCCESS)
		{
			mctx->ok = 1;
			mctx->bs = bs;
		}
		else
			return FAIL;

		return res;
	}

	command error_t BlockCipherMode.encrypt(CipherModeContext *context, uint8_t *plaintext, uint8_t *ciphertext, uint16_t length, uint8_t *counter)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		CipherContext *cctx = &(context->cc);
		uint64_t *ext_ctr = (uint64_t *)counter;
		uint8_t enc_dat[16];
		uint16_t i, n;
		uint8_t bs = mctx->bs;
		uint64_t enc[2];

		/* Zero bytes are easy to encrypt. */
		if (!length)
			return SUCCESS;

		/* Improperly initialized. */
		if (!mctx->ok)
			return FAIL;

		if (counter != NULL)
		{
			/* In case of first time encryption, set given counter. */
			if (mctx->ok == 1)
				mctx->ctr = *ext_ctr;
			else
				*ext_ctr = mctx->ctr;
		}

		mctx->ok = 2;

		enc[0] = mctx->ctr;
		enc[1] = 0;
		while (length != 0)
		{
			call BlockCipher.encrypt(cctx, (uint8_t *)enc, enc_dat);
			n = (length > bs) ? bs : length;
			for (i = 0; i < n; i++)
				*(ciphertext++) = *(plaintext++) ^ enc_dat[i];
			length -= i;
			enc[0]++;
		}
		mctx->ctr = enc[0];

		return SUCCESS;
	}

	command error_t BlockCipherMode.decrypt(CipherModeContext *context, uint8_t *ciphertext, uint8_t *plaintext, uint16_t length, uint8_t *counter)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		CipherContext *cctx = &(context->cc);
		uint64_t dec[2];
		uint64_t *ext_ctr = (uint64_t *)counter;
		uint8_t enc_dat[16];
		uint16_t i, n;
		uint8_t bs = mctx->bs;

		/* Zero bytes are easy to encrypt. */
		if (!length)
			return SUCCESS;

		/* Improperly initialized. */
		if (!mctx->ok)
			return FAIL;

		/* Can use internal counter. This should only happen, when
		 * non-asynchronous, bidirectional communication using the same key is
		 * occuring. Try to avoid it. Also try to avoid bidirectional,
		 * asynchronous communication with a single key in CTR mode, unless
		 * both sides use maximum distant initial counter states and stop using
		 * the key after 2^32 blocks. */
		if (counter == NULL)
			dec[0] = mctx->ctr;
		else
			dec[0] = *ext_ctr;
		dec[1] = 0;

		while (length != 0)
		{
			call BlockCipher.encrypt(cctx, (uint8_t *)dec, enc_dat);
			dec[0]++;
			n = (length > bs) ? bs : length;
			for (i = 0; i < n; i++)
				*(plaintext++) = *(ciphertext++) ^ enc_dat[i];
			length -= i;
		}

		/* Export counter state. */
		if (counter == NULL)
			mctx->ctr = dec[0];
		else
			*ext_ctr = dec[0];

		return SUCCESS;
	}

	command error_t BlockCipherMode.initIncrementalDecrypt (CipherModeContext *context, uint8_t *counter, uint16_t length)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		uint64_t *ext_ctr = (uint64_t *)counter;

		mctx->dec = *ext_ctr;
		mctx->dec_skip = 0;

		return SUCCESS;
	}

	command error_t BlockCipherMode.incrementalDecrypt (CipherModeContext *context, uint8_t *ciphertext, uint8_t *plaintext, uint16_t length, uint16_t *done)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		CipherContext *cctx = &(context->cc);
		uint8_t enc_dat[16];
		uint16_t i, n;
		uint8_t bs = mctx->bs, mask = bs - 1;
		uint64_t dec[2];

		/* Nothing to do. */
		if (!length)
		{
			if (done != NULL)
				*done = 0;
			return SUCCESS;
		}

		/* Improperly initialized. */
		if (!mctx->ok)
			return FAIL;

		dec[0] = mctx->dec;
		dec[1] = 0;
		while (length)
		{
			call BlockCipher.encrypt(cctx, (uint8_t *)dec, enc_dat);
			n = ((length > bs) ? bs : length) + mctx->dec_skip;
			for (i = mctx->dec_skip; i < n; i++)
				*(plaintext++) = *(ciphertext++) ^ enc_dat[i];
			length -= i - mctx->dec_skip;
			i &= mask;
			mctx->dec_skip = i;
			if (!i)
				dec[0]++;
		}
		mctx->dec = dec[0];

		if (done != NULL)
			*done = length;
		return SUCCESS;
	}

	command uint64_t get_counter(CipherModeContext *context)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		return mctx->ctr;
	}
	command void set_counter(CipherModeContext *context, uint64_t ctr)
	{
		CTRModeContext *mctx = (CTRModeContext *)(context->context);
		atomic
		{
			mctx->ctr = ctr;
			mctx->ok = 2;
		}
	}
}
