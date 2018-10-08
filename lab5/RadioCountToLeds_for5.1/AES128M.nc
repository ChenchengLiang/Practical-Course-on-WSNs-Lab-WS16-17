/* AES128 encryption
 * Copyright (C) 2011-2013 Arne Bochem
 *   Georg-August-Universitaet Goettingen
 *   Institut fuer Informatik
 *   Telematics Group
 *   Sensorlab
 * All rights reserved.
 */

includes crypto;

/* This is an implementation of the AES128 cipher, according to FIPS-197. */

#define BSIZE 16
#define ROUNDS 10

module AES128M
{
	provides interface BlockCipher;
	provides interface BlockCipherInfo;
}
implementation
{
	static const uint8_t sbox[256] = {0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76, 0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0, 0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15, 0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75, 0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84, 0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf, 0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8, 0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2, 0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73, 0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb, 0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79, 0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08, 0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a, 0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e, 0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf, 0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16};
	static const uint8_t isbox[256] = {0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e, 0x81, 0xf3, 0xd7, 0xfb, 0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87, 0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb, 0x54, 0x7b, 0x94, 0x32, 0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e, 0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49, 0x6d, 0x8b, 0xd1, 0x25, 0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16, 0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92, 0x6c, 0x70, 0x48, 0x50, 0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84, 0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05, 0xb8, 0xb3, 0x45, 0x06, 0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02, 0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b, 0x3a, 0x91, 0x11, 0x41, 0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73, 0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8, 0x1c, 0x75, 0xdf, 0x6e, 0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89, 0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b, 0xfc, 0x56, 0x3e, 0x4b, 0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4, 0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59, 0x27, 0x80, 0xec, 0x5f, 0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d, 0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef, 0xa0, 0xe0, 0x3b, 0x4d, 0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61, 0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63, 0x55, 0x21, 0x0c, 0x7d};
	static const uint8_t rcon[44] = {0xff, 0xff, 0xff, 0xff, 0x01, 0x0, 0x0, 0x0, 0x02, 0x0, 0x0, 0x0, 0x04, 0x0, 0x0, 0x0, 0x08, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x40, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x0, 0x1b, 0x0, 0x0, 0x0, 0x36, 0x0, 0x0, 0x0};

#if !defined(TOSSIM) && (defined(PLATFORM_MICAZ) || defined(PLATFORM_MICA2) || defined(PLATFORM_IRIS))
#define XTIME(x,y) __asm__ __volatile__ (                                  \
		/* y=x*2 in GF(2^8) - 8 cycles */                          \
		"mov __tmp_reg__, %1\n"                                    \
		"bst __tmp_reg__, 7\n"        /* Store MSB             */  \
		"lsl __tmp_reg__\n"           /* v <<= 1               */  \
		"clr %0\n"                    /* t = 0                 */  \
		"bld %0, 0\n"                 /* Load MSB to t as LSB. */  \
		"neg %0\n"                    /* t = 0 - t (signed)    */  \
		"andi %0, 0x1b\n"             /* t[0|FF] &= 0x1b       */  \
		"eor %0, __tmp_reg__\n"       /* v ^ MSB ? 0x1b : 0    */  \
		: "=a" (y)                                                 \
		: "r" (x)                                                  \
	); /* Check if =&a helps avoid the mov! (http://www.nongnu.org/avr-libc/user-manual/inline_asm.html) */
#else
#define XTIME(x,y) {(y) = ((x) << 1) ^ (((x) >> 7) * 0x1b);}
#endif

	typedef struct AESContext
	{
		uint32_t w[4*(ROUNDS+1)];
	} AESContext;

	/* Here, we enter the land of unrolls. */

	void AddRoundKey (uint8_t *state, uint32_t *w)
	{
		uint8_t *rk = (uint8_t *)w;
		state[ 0] ^= rk[ 0]; state[ 1] ^= rk[ 1]; state[ 2] ^= rk[ 2]; state[ 3] ^= rk[ 3];
		state[ 4] ^= rk[ 4]; state[ 5] ^= rk[ 5]; state[ 6] ^= rk[ 6]; state[ 7] ^= rk[ 7];
		state[ 8] ^= rk[ 8]; state[ 9] ^= rk[ 9]; state[10] ^= rk[10]; state[11] ^= rk[11];
		state[12] ^= rk[12]; state[13] ^= rk[13]; state[14] ^= rk[14]; state[15] ^= rk[15];
	}

	void InvSubBytes (uint8_t *state)
	{
		state[ 0] = isbox[state[ 0]]; state[ 1] = isbox[state[ 1]]; state[ 2] = isbox[state[ 2]]; state[ 3] = isbox[state[ 3]];
		state[ 4] = isbox[state[ 4]]; state[ 5] = isbox[state[ 5]]; state[ 6] = isbox[state[ 6]]; state[ 7] = isbox[state[ 7]];
		state[ 8] = isbox[state[ 8]]; state[ 9] = isbox[state[ 9]]; state[10] = isbox[state[10]]; state[11] = isbox[state[11]];
		state[12] = isbox[state[12]]; state[13] = isbox[state[13]]; state[14] = isbox[state[14]]; state[15] = isbox[state[15]];
	}

	void SubBytes (uint8_t *state)
	{
		state[ 0] = sbox[state[ 0]]; state[ 1] = sbox[state[ 1]]; state[ 2] = sbox[state[ 2]]; state[ 3] = sbox[state[ 3]];
		state[ 4] = sbox[state[ 4]]; state[ 5] = sbox[state[ 5]]; state[ 6] = sbox[state[ 6]]; state[ 7] = sbox[state[ 7]];
		state[ 8] = sbox[state[ 8]]; state[ 9] = sbox[state[ 9]]; state[10] = sbox[state[10]]; state[11] = sbox[state[11]];
		state[12] = sbox[state[12]]; state[13] = sbox[state[13]]; state[14] = sbox[state[14]]; state[15] = sbox[state[15]];
	}

	void SubWord (uint8_t *word)
	{
		word[0] = sbox[word[0]];
		word[1] = sbox[word[1]];
		word[2] = sbox[word[2]];
		word[3] = sbox[word[3]];
	}

	void RotWord (uint8_t *word)
	{
		uint8_t tmp = word[0];
		word[0] = word[1];
		word[1] = word[2];
		word[2] = word[3];
		word[3] = tmp;
	}

	void ShiftRows (uint8_t *states[2], uint8_t *selected)
	{
		uint8_t i = *selected;
		uint8_t *in = states[i];
		uint8_t *out;
		i ^= 1; out = states[i]; *selected = i;
		out[ 0] = in[ 0]; out[ 4] = in[ 4]; out[ 8] = in[ 8]; out[12] = in[12];
		out[ 1] = in[ 5]; out[ 5] = in[ 9]; out[ 9] = in[13]; out[13] = in[ 1];
		out[ 2] = in[10]; out[ 6] = in[14]; out[10] = in[ 2]; out[14] = in[ 6];
		out[ 3] = in[15]; out[ 7] = in[ 3]; out[11] = in[ 7]; out[15] = in[11];
	}

	void InvShiftRows (uint8_t *states[2], uint8_t *selected)
	{
		uint8_t i = *selected;
		uint8_t *in = states[i];
		uint8_t *out;
		i ^= 1; out = states[i]; *selected = i;
		out[ 0] = in[ 0]; out[ 4] = in[ 4]; out[ 8] = in[ 8]; out[12] = in[12];
		out[ 1] = in[13]; out[ 5] = in[ 1]; out[ 9] = in[ 5]; out[13] = in[ 9];
		out[ 2] = in[10]; out[ 6] = in[14]; out[10] = in[ 2]; out[14] = in[ 6];
		out[ 3] = in[ 7]; out[ 7] = in[11]; out[11] = in[15]; out[15] = in[ 3];
	}

	void MixColumns (uint8_t *states[2], uint8_t *selected)
	{
		uint8_t i = *selected;
		uint8_t *in = states[i];
		/* Better keep this in registers. */
		register uint8_t *out;
		register uint8_t fac0 = 0, fac1 = 0, fac2 = 0, fac3 = 0;
		register uint8_t col, c1, c2, c3, v0, v1, v2, v3;
		i ^= 1; out = states[i]; *selected = i;

		for (col = 0; col < 16; col += 4)
		{
			c1 = col + 1; c2 = col + 2; c3 = col + 3;
			v0 = in[col]; v1 = in[c1]; v2 = in[c2]; v3 = in[c3];
			/* Multiplication by 2 in Rijndael GF(2^8):
			 * Irreducible polynomial for AES is:
			 * m(x) = x^8 + x^4 + x^3 + x + 1 = 10011011
			 * Input bytes are: b7*x^8+b6*x7+...+b1*x+b0
			 * If b7=1, the we have to reduce by subtracting/xoring m(x).
			 * Multiplication itself can simply be done with *2 or <<1.
			 * 0x1b = 11011, top-most bit is gone due to shift.
			 * We only need multiplication by 2, since multiplication with 1 is the
			 * identity, and x*3 = x*2 + x, where + is xor. (FIPS-197, p.11)
       */
			XTIME(v0, fac0);
			XTIME(v1, fac1);
			XTIME(v2, fac2);
			XTIME(v3, fac3);
			/* Matrix to multiply:
			 * 2 3 1 1
			 * 1 2 3 1
			 * 1 1 2 3
			 * 3 1 1 2
			 */
			/* Row     ---row1--   ---row2--   ---row3--   ---row4-- */
			out[col] = fac0      ^ fac1 ^ v1 ^        v2 ^        v3;
			out[c1 ] =        v0 ^ fac1      ^ fac2 ^ v2 ^        v3;
			out[c2 ] =        v0 ^        v1 ^ fac2      ^ fac3 ^ v3;
			out[c3 ] = fac0 ^ v0 ^        v1 ^        v2 ^ fac3     ;
		}
	}

	void InvMixColumns (uint8_t *states[2], uint8_t *selected)
	{
		uint8_t i = *selected;
		uint8_t *in = states[i];
		register uint8_t *out;
		register uint8_t f2_0, f2_1, f2_2, f2_3;
		register uint8_t f4_0, f4_1, f4_2, f4_3;
		register uint8_t f8_0, f8_1, f8_2, f8_3;
		register uint8_t col, c1, c2, c3;
		register uint8_t v0, v1, v2, v3;
		register uint8_t x0, x1, x2, x3;
		register uint8_t acc;
		i ^= 1; out = states[i]; *selected = i;

		for (col = 0; col < 16; col += 4)
		{
			c1 = col + 1; c2 = col + 2; c3 = col + 3;
			v0 = in[col]; v1 = in[c1]; v2 = in[c2]; v3 = in[c3];

			/* 112 cycles */
			XTIME(v0, f2_0); XTIME(f2_0, f4_0); XTIME(f4_0, f8_0);
			XTIME(v1, f2_1); XTIME(f2_1, f4_1); XTIME(f4_1, f8_1);
			XTIME(v2, f2_2); XTIME(f2_2, f4_2); XTIME(f4_2, f8_2);
			XTIME(v3, f2_3); XTIME(f2_3, f4_3); XTIME(f4_3, f8_3);

			/* Matrix to multiply:
			 * e b d 9
			 * 9 e b d
			 * d 9 e b
			 * b d 9 e
			 *
			 * Corresponding values:
			 * 9 = v ^ f8
			 * b = v ^ f2 ^ f8
			 * d = v ^ f4 ^ f8
			 * e = f2 ^ f4 ^ f8
			 */
			x1 = acc = v0 ^ f8_0;
			x3 = (acc ^ f2_0);
			x2 = (acc ^ f4_0);
			x0 = f2_0 ^ f4_0 ^ f8_0;

			x2 ^= acc = v1 ^ f8_1;
			x0 ^= (acc ^ f2_1);
			x3 ^= (acc ^ f4_1);
			x1 ^= f2_1 ^ f4_1 ^ f8_1;

			x3 ^= acc = v2 ^ f8_2;
			x1 ^= (acc ^ f2_2);
			x0 ^= (acc ^ f4_2);
			x2 ^= f2_2 ^ f4_2 ^ f8_2;

			x0 ^= acc = v3 ^ f8_3;
			x2 ^= (acc ^ f2_3);
			x1 ^= (acc ^ f4_3);
			x3 ^= f2_3 ^ f4_3 ^ f8_3;

			out[col] = x0;
			out[c1 ] = x1;
			out[c2 ] = x2;
			out[c3 ] = x3;
		}
	}

	static inline error_t init_real (CipherContext *context, uint8_t block_size, uint8_t key_size, uint8_t *key)
	{
#ifndef USE_JIT_AES128
		AESContext *ctx = (AESContext *)(context->context);
#else
		AESContext *ctx = (AESContext *)context;
#endif
		uint32_t *w = ctx->w;
		uint32_t *r = (uint32_t *)rcon;
		uint32_t tmp;
		uint8_t *wb = (uint8_t *)w;
		uint8_t i, max = 4 * (ROUNDS + 1);

		if (block_size != BSIZE || key_size != 16)
			return FAIL;

		memcpy(wb, key, 16);

		for (i = 4; i < max; i++)
		{
			tmp = w[i - 1];
			if (!(i & 3))
			{
				RotWord((uint8_t *)&tmp);
				SubWord((uint8_t *)&tmp);
				tmp ^= r[i >> 2];
			}
			w[i] = w[i - 4] ^ tmp;
		}

		return SUCCESS;
	}

	command error_t BlockCipher.init (CipherContext *context, uint8_t block_size, uint8_t key_size, uint8_t *key)
	{
#ifndef USE_JIT_AES128
		return init_real(context, block_size, key_size, key);
#else
		if (block_size != BSIZE || key_size != 16)
			return FAIL;
		memcpy(context, key, key_size);
		return SUCCESS;
#endif
	}

	command error_t BlockCipher.encrypt (CipherContext *context, uint8_t *in, uint8_t *out)
	{
#ifndef USE_JIT_AES128
		AESContext *ctx = (AESContext *)(context->context);
#else
		AESContext aesctx, *ctx = &aesctx;
#endif
		uint8_t state_buf[4*4], *states[2] = {state_buf, out};
		uint8_t rnd;
		uint8_t i = 0;

#ifdef USE_JIT_AES128
		init_real((CipherContext *)ctx, BSIZE, 16, (uint8_t *)context);
#endif

		memcpy(states[i], in, BSIZE);
		AddRoundKey(states[i], ctx->w);

		for (rnd = 1; rnd < ROUNDS; rnd++)
		{
			SubBytes(states[i]);
			ShiftRows(states, &i);
			MixColumns(states, &i);
			AddRoundKey(states[i], ctx->w + rnd*4);
		}

		SubBytes(states[i]);
		ShiftRows(states, &i);
		AddRoundKey(states[i], ctx->w + ROUNDS*4);

		/* At this point: i == 1, states[1] == out */
		return SUCCESS;
	}

	command error_t BlockCipher.decrypt (CipherContext *context, uint8_t *in, uint8_t *out)
	{
#ifndef USE_JIT_AES128
		AESContext *ctx = (AESContext *)(context->context);
#else
		AESContext aesctx, *ctx = &aesctx;
#endif
		uint8_t state_buf[4*4], *states[2] = {state_buf, out};
		uint8_t rnd;
		uint8_t i = 0;

#ifdef USE_JIT_AES128
		init_real((CipherContext *)ctx, BSIZE, 16, (uint8_t *)context);
#endif

		memcpy(states[i], in, BSIZE);
		AddRoundKey(states[i], ctx->w + ROUNDS*4);

		for (rnd = ROUNDS - 1; rnd > 0; rnd--)
		{
			InvShiftRows(states, &i);
			InvSubBytes(states[i]);
			AddRoundKey(states[i], ctx->w + rnd*4);
			InvMixColumns(states, &i);
		}

		InvShiftRows(states, &i);
		InvSubBytes(states[i]);
		AddRoundKey(states[i], ctx->w);

		/* At this point: i == 1, states[1] == out */
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
