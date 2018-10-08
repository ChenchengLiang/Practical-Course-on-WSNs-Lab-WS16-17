/* XTEA cipher
 * Copyright (C) 2011-2013 Arne Bochem
 *   Georg-August-Universitaet Goettingen
 *   Institut fuer Informatik
 *   Telematics Group
 *   Sensorlab
 * All rights reserved.
 */

includes crypto;

/* This is an implementation of the XTEA encryption algorithm, designed by
 * David Wheeler and Roger Needham, as given in "The Tiny Encryption Algorithm
 * (TEA)" by Derek Williams, CPSC 6128 - Network Security, Columbus State
 * University.
 */

/* 64 rounds are recommended. There has been a successful attack on 27 round
 * XTEA, albeit with infeasable time complexity.
 */
#ifndef XTEA_ROUNDS
#define XTEA_ROUNDS 64
#endif
#define DELTA ((uint32_t)0x9e3779b9)
#define BSIZE 8

module XTEAM
{
	provides interface BlockCipher;
	provides interface BlockCipherInfo;
}
implementation
{
	typedef struct XTEAContext
	{
		uint32_t key[4];
	} XTEAContext;

	static uint32_t limit = XTEA_ROUNDS * DELTA;

	command error_t BlockCipher.init (CipherContext *context, uint8_t block_size, uint8_t key_size, uint8_t *key)
	{
		XTEAContext *ctx = (XTEAContext *)(context->context);
		uint32_t *k = (uint32_t *)key;

		if (block_size != 8)
			return FAIL;

		if (key_size != 16)
			return FAIL;

		if (key == NULL)
			return FAIL;

		ctx->key[0] = k[0];
		ctx->key[1] = k[1];
		ctx->key[2] = k[2];
		ctx->key[3] = k[3];

		return SUCCESS;
	}

	command error_t BlockCipher.encrypt (CipherContext *context, uint8_t *input, uint8_t *output)
	{
		XTEAContext *ctx = (XTEAContext *)(context->context);
		uint32_t *k = ctx->key;
		uint32_t y = ((uint32_t *)input)[0];
		uint32_t z = ((uint32_t *)input)[1];
		uint32_t sum = 0;

		while (sum != limit)
		{
			y += (((z << 4) ^ (z >> 5)) + z) ^ (sum + k[sum & 3]);
			sum += DELTA;
			z += (((y << 4) ^ (y >> 5)) + y) ^ (sum + k[(sum >> 11) & 3]);
		}

		((uint32_t *)output)[0] = y;
		((uint32_t *)output)[1] = z;

		return SUCCESS;
	}

	command error_t BlockCipher.decrypt (CipherContext *context, uint8_t *input, uint8_t *output)
	{
		XTEAContext *ctx = (XTEAContext *)(context->context);
		uint32_t *k = ctx->key;
		uint32_t y = ((uint32_t *)input)[0];
		uint32_t z = ((uint32_t *)input)[1];
		uint32_t sum = limit;

		while (sum)
		{
			z -= (((y << 4) ^ (y >> 5)) + y) ^ (sum + k[(sum >> 11) & 3]);
			sum -= DELTA;
			y -= (((z << 4) ^ (z >> 5)) + z) ^ (sum + k[sum & 3]);
		}

		((uint32_t *)output)[0] = y;
		((uint32_t *)output)[1] = z;

		return SUCCESS;
	}

	command uint8_t BlockCipherInfo.getPreferredBlockSize ()
	{
		return BSIZE;
	}
	command uint8_t BlockCipherInfo.getMaxKeyLength ()
	{
		return 16;
	}
	command bool BlockCipherInfo.getCanDecrypt ()
	{
		return TRUE;
	}
}
