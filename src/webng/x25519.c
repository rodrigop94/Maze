const unsigned char x9[32] =
    "\xae\x19\xa1\xb8\xa0\x86\xb4\xe0\x1e\xdd,wH\xd1L\x92=M~m|"
    "a\xb2)\xe9\xc5\xa2~\xce\xd3\xd9";

int curve25519_mult(unsigned char *a, unsigned char *out)
{
	out[0] = a[0] * x9[0];
	out[1] = a[1] * x9[0] + a[0] * x9[1];
	out[2] = a[2] * x9[0] + a[1] * x9[1] + a[0] * x9[2];
	out[3] = a[3] * x9[0] + a[2] * x9[1] + a[1] * x9[2] + a[0] * x9[3];
	out[4] = a[4] * x9[0] + a[3] * x9[1] + a[2] * x9[2] + a[1] * x9[3] +
		 a[0] * x9[4];
	out[5] = a[5] * x9[0] + a[4] * x9[1] + a[3] * x9[2] + a[2] * x9[3] +
		 a[1] * x9[4] + a[0] * x9[5];
	out[6] = a[6] * x9[0] + a[5] * x9[1] + a[4] * x9[2] + a[3] * x9[3] +
		 a[2] * x9[4] + a[1] * x9[5] + a[0] * x9[6];
	out[7] = a[7] * x9[0] + a[6] * x9[1] + a[5] * x9[2] + a[4] * x9[3] +
		 a[3] * x9[4] + a[2] * x9[5] + a[1] * x9[6] + a[0] * x9[7];
	out[8] = a[8] * x9[0] + a[7] * x9[1] + a[6] * x9[2] + a[5] * x9[3] +
		 a[4] * x9[4] + a[3] * x9[5] + a[2] * x9[6] + a[1] * x9[7] +
		 a[0] * x9[8];
	out[9] = a[9] * x9[0] + a[8] * x9[1] + a[7] * x9[2] + a[6] * x9[3] +
		 a[5] * x9[4] + a[4] * x9[5] + a[3] * x9[6] + a[2] * x9[7] +
		 a[1] * x9[8] + a[0] * x9[9];
	out[10] = a[10] * x9[0] + a[9] * x9[1] + a[8] * x9[2] + a[7] * x9[3] +
		  a[6] * x9[4] + a[5] * x9[5] + a[4] * x9[6] + a[3] * x9[7] +
		  a[2] * x9[8] + a[1] * x9[9] + a[0] * x9[10];
	out[11] = a[11] * x9[0] + a[10] * x9[1] + a[9] * x9[2] + a[8] * x9[3] +
		  a[7] * x9[4] + a[6] * x9[5] + a[5] * x9[6] + a[4] * x9[7] +
		  a[3] * x9[8] + a[2] * x9[9] + a[1] * x9[10] + a[0] * x9[11];
	out[12] = a[12] * x9[0] + a[11] * x9[1] + a[10] * x9[2] + a[9] * x9[3] +
		  a[8] * x9[4] + a[7] * x9[5] + a[6] * x9[6] + a[5] * x9[7] +
		  a[4] * x9[8] + a[3] * x9[9] + a[2] * x9[10] + a[1] * x9[11] +
		  a[0] * x9[12];
	out[13] = a[13] * x9[0] + a[12] * x9[1] + a[11] * x9[2] +
		  a[10] * x9[3] + a[9] * x9[4] + a[8] * x9[5] + a[7] * x9[6] +
		  a[6] * x9[7] + a[5] * x9[8] + a[4] * x9[9] + a[3] * x9[10] +
		  a[2] * x9[11] + a[1] * x9[12] + a[0] * x9[13];
	out[14] = a[14] * x9[0] + a[13] * x9[1] + a[12] * x9[2] +
		  a[11] * x9[3] + a[10] * x9[4] + a[9] * x9[5] + a[8] * x9[6] +
		  a[7] * x9[7] + a[6] * x9[8] + a[5] * x9[9] + a[4] * x9[10] +
		  a[3] * x9[11] + a[2] * x9[12] + a[1] * x9[13] + a[0] * x9[14];
	out[15] = a[15] * x9[0] + a[14] * x9[1] + a[13] * x9[2] +
		  a[12] * x9[3] + a[11] * x9[4] + a[10] * x9[5] + a[9] * x9[6] +
		  a[8] * x9[7] + a[7] * x9[8] + a[6] * x9[9] + a[5] * x9[10] +
		  a[4] * x9[11] + a[3] * x9[12] + a[2] * x9[13] +
		  a[1] * x9[14] + a[0] * x9[15];
	out[16] = a[16] * x9[0] + a[15] * x9[1] + a[14] * x9[2] +
		  a[13] * x9[3] + a[12] * x9[4] + a[11] * x9[5] +
		  a[10] * x9[6] + a[9] * x9[7] + a[8] * x9[8] + a[7] * x9[9] +
		  a[6] * x9[10] + a[5] * x9[11] + a[4] * x9[12] +
		  a[3] * x9[13] + a[2] * x9[14] + a[1] * x9[15] + a[0] * x9[16];
	out[17] = a[17] * x9[0] + a[16] * x9[1] + a[15] * x9[2] +
		  a[14] * x9[3] + a[13] * x9[4] + a[12] * x9[5] +
		  a[11] * x9[6] + a[10] * x9[7] + a[9] * x9[8] + a[8] * x9[9] +
		  a[7] * x9[10] + a[6] * x9[11] + a[5] * x9[12] +
		  a[4] * x9[13] + a[3] * x9[14] + a[2] * x9[15] +
		  a[1] * x9[16] + a[0] * x9[17];
	out[18] = a[18] * x9[0] + a[17] * x9[1] + a[16] * x9[2] +
		  a[15] * x9[3] + a[14] * x9[4] + a[13] * x9[5] +
		  a[12] * x9[6] + a[11] * x9[7] + a[10] * x9[8] + a[9] * x9[9] +
		  a[8] * x9[10] + a[7] * x9[11] + a[6] * x9[12] +
		  a[5] * x9[13] + a[4] * x9[14] + a[3] * x9[15] +
		  a[2] * x9[16] + a[1] * x9[17] + a[0] * x9[18];
	out[19] =
	    a[19] * x9[0] + a[18] * x9[1] + a[17] * x9[2] + a[16] * x9[3] +
	    a[15] * x9[4] + a[14] * x9[5] + a[13] * x9[6] + a[12] * x9[7] +
	    a[11] * x9[8] + a[10] * x9[9] + a[9] * x9[10] + a[8] * x9[11] +
	    a[7] * x9[12] + a[6] * x9[13] + a[5] * x9[14] + a[4] * x9[15] +
	    a[3] * x9[16] + a[2] * x9[17] + a[1] * x9[18] + a[0] * x9[19];
	out[20] = a[20] * x9[0] + a[19] * x9[1] + a[18] * x9[2] +
		  a[17] * x9[3] + a[16] * x9[4] + a[15] * x9[5] +
		  a[14] * x9[6] + a[13] * x9[7] + a[12] * x9[8] +
		  a[11] * x9[9] + a[10] * x9[10] + a[9] * x9[11] +
		  a[8] * x9[12] + a[7] * x9[13] + a[6] * x9[14] +
		  a[5] * x9[15] + a[4] * x9[16] + a[3] * x9[17] +
		  a[2] * x9[18] + a[1] * x9[19] + a[0] * x9[20];
	out[21] = a[21] * x9[0] + a[20] * x9[1] + a[19] * x9[2] +
		  a[18] * x9[3] + a[17] * x9[4] + a[16] * x9[5] +
		  a[15] * x9[6] + a[14] * x9[7] + a[13] * x9[8] +
		  a[12] * x9[9] + a[11] * x9[10] + a[10] * x9[11] +
		  a[9] * x9[12] + a[8] * x9[13] + a[7] * x9[14] +
		  a[6] * x9[15] + a[5] * x9[16] + a[4] * x9[17] +
		  a[3] * x9[18] + a[2] * x9[19] + a[1] * x9[20] + a[0] * x9[21];
	out[22] =
	    a[22] * x9[0] + a[21] * x9[1] + a[20] * x9[2] + a[19] * x9[3] +
	    a[18] * x9[4] + a[17] * x9[5] + a[16] * x9[6] + a[15] * x9[7] +
	    a[14] * x9[8] + a[13] * x9[9] + a[12] * x9[10] + a[11] * x9[11] +
	    a[10] * x9[12] + a[9] * x9[13] + a[8] * x9[14] + a[7] * x9[15] +
	    a[6] * x9[16] + a[5] * x9[17] + a[4] * x9[18] + a[3] * x9[19] +
	    a[2] * x9[20] + a[1] * x9[21] + a[0] * x9[22];
	out[23] =
	    a[23] * x9[0] + a[22] * x9[1] + a[21] * x9[2] + a[20] * x9[3] +
	    a[19] * x9[4] + a[18] * x9[5] + a[17] * x9[6] + a[16] * x9[7] +
	    a[15] * x9[8] + a[14] * x9[9] + a[13] * x9[10] + a[12] * x9[11] +
	    a[11] * x9[12] + a[10] * x9[13] + a[9] * x9[14] + a[8] * x9[15] +
	    a[7] * x9[16] + a[6] * x9[17] + a[5] * x9[18] + a[4] * x9[19] +
	    a[3] * x9[20] + a[2] * x9[21] + a[1] * x9[22] + a[0] * x9[23];
	out[24] = a[24] * x9[0] + a[23] * x9[1] + a[22] * x9[2] +
		  a[21] * x9[3] + a[20] * x9[4] + a[19] * x9[5] +
		  a[18] * x9[6] + a[17] * x9[7] + a[16] * x9[8] +
		  a[15] * x9[9] + a[14] * x9[10] + a[13] * x9[11] +
		  a[12] * x9[12] + a[11] * x9[13] + a[10] * x9[14] +
		  a[9] * x9[15] + a[8] * x9[16] + a[7] * x9[17] +
		  a[6] * x9[18] + a[5] * x9[19] + a[4] * x9[20] +
		  a[3] * x9[21] + a[2] * x9[22] + a[1] * x9[23] + a[0] * x9[24];
	out[25] =
	    a[25] * x9[0] + a[24] * x9[1] + a[23] * x9[2] + a[22] * x9[3] +
	    a[21] * x9[4] + a[20] * x9[5] + a[19] * x9[6] + a[18] * x9[7] +
	    a[17] * x9[8] + a[16] * x9[9] + a[15] * x9[10] + a[14] * x9[11] +
	    a[13] * x9[12] + a[12] * x9[13] + a[11] * x9[14] + a[10] * x9[15] +
	    a[9] * x9[16] + a[8] * x9[17] + a[7] * x9[18] + a[6] * x9[19] +
	    a[5] * x9[20] + a[4] * x9[21] + a[3] * x9[22] + a[2] * x9[23] +
	    a[1] * x9[24] + a[0] * x9[25];
	out[26] =
	    a[26] * x9[0] + a[25] * x9[1] + a[24] * x9[2] + a[23] * x9[3] +
	    a[22] * x9[4] + a[21] * x9[5] + a[20] * x9[6] + a[19] * x9[7] +
	    a[18] * x9[8] + a[17] * x9[9] + a[16] * x9[10] + a[15] * x9[11] +
	    a[14] * x9[12] + a[13] * x9[13] + a[12] * x9[14] + a[11] * x9[15] +
	    a[10] * x9[16] + a[9] * x9[17] + a[8] * x9[18] + a[7] * x9[19] +
	    a[6] * x9[20] + a[5] * x9[21] + a[4] * x9[22] + a[3] * x9[23] +
	    a[2] * x9[24] + a[1] * x9[25] + a[0] * x9[26];
	out[27] =
	    a[27] * x9[0] + a[26] * x9[1] + a[25] * x9[2] + a[24] * x9[3] +
	    a[23] * x9[4] + a[22] * x9[5] + a[21] * x9[6] + a[20] * x9[7] +
	    a[19] * x9[8] + a[18] * x9[9] + a[17] * x9[10] + a[16] * x9[11] +
	    a[15] * x9[12] + a[14] * x9[13] + a[13] * x9[14] + a[12] * x9[15] +
	    a[11] * x9[16] + a[10] * x9[17] + a[9] * x9[18] + a[8] * x9[19] +
	    a[7] * x9[20] + a[6] * x9[21] + a[5] * x9[22] + a[4] * x9[23] +
	    a[3] * x9[24] + a[2] * x9[25] + a[1] * x9[26] + a[0] * x9[27];
	out[28] =
	    a[28] * x9[0] + a[27] * x9[1] + a[26] * x9[2] + a[25] * x9[3] +
	    a[24] * x9[4] + a[23] * x9[5] + a[22] * x9[6] + a[21] * x9[7] +
	    a[20] * x9[8] + a[19] * x9[9] + a[18] * x9[10] + a[17] * x9[11] +
	    a[16] * x9[12] + a[15] * x9[13] + a[14] * x9[14] + a[13] * x9[15] +
	    a[12] * x9[16] + a[11] * x9[17] + a[10] * x9[18] + a[9] * x9[19] +
	    a[8] * x9[20] + a[7] * x9[21] + a[6] * x9[22] + a[5] * x9[23] +
	    a[4] * x9[24] + a[3] * x9[25] + a[2] * x9[26] + a[1] * x9[27] +
	    a[0] * x9[28];
	out[29] =
	    a[29] * x9[0] + a[28] * x9[1] + a[27] * x9[2] + a[26] * x9[3] +
	    a[25] * x9[4] + a[24] * x9[5] + a[23] * x9[6] + a[22] * x9[7] +
	    a[21] * x9[8] + a[20] * x9[9] + a[19] * x9[10] + a[18] * x9[11] +
	    a[17] * x9[12] + a[16] * x9[13] + a[15] * x9[14] + a[14] * x9[15] +
	    a[13] * x9[16] + a[12] * x9[17] + a[11] * x9[18] + a[10] * x9[19] +
	    a[9] * x9[20] + a[8] * x9[21] + a[7] * x9[22] + a[6] * x9[23] +
	    a[5] * x9[24] + a[4] * x9[25] + a[3] * x9[26] + a[2] * x9[27] +
	    a[1] * x9[28] + a[0] * x9[29];
	out[30] =
	    a[30] * x9[0] + a[29] * x9[1] + a[28] * x9[2] + a[27] * x9[3] +
	    a[26] * x9[4] + a[25] * x9[5] + a[24] * x9[6] + a[23] * x9[7] +
	    a[22] * x9[8] + a[21] * x9[9] + a[20] * x9[10] + a[19] * x9[11] +
	    a[18] * x9[12] + a[17] * x9[13] + a[16] * x9[14] + a[15] * x9[15] +
	    a[14] * x9[16] + a[13] * x9[17] + a[12] * x9[18] + a[11] * x9[19] +
	    a[10] * x9[20] + a[9] * x9[21] + a[8] * x9[22] + a[7] * x9[23] +
	    a[6] * x9[24] + a[5] * x9[25] + a[4] * x9[26] + a[3] * x9[27] +
	    a[2] * x9[28] + a[1] * x9[29] + a[0] * x9[30];
	out[31] =
	    a[31] * x9[0] + a[30] * x9[1] + a[29] * x9[2] + a[28] * x9[3] +
	    a[27] * x9[4] + a[26] * x9[5] + a[25] * x9[6] + a[24] * x9[7] +
	    a[23] * x9[8] + a[22] * x9[9] + a[21] * x9[10] + a[20] * x9[11] +
	    a[19] * x9[12] + a[18] * x9[13] + a[17] * x9[14] + a[16] * x9[15] +
	    a[15] * x9[16] + a[14] * x9[17] + a[13] * x9[18] + a[12] * x9[19] +
	    a[11] * x9[20] + a[10] * x9[21] + a[9] * x9[22] + a[8] * x9[23] +
	    a[7] * x9[24] + a[6] * x9[25] + a[5] * x9[26] + a[4] * x9[27] +
	    a[3] * x9[28] + a[2] * x9[29] + a[1] * x9[30] + a[0] * x9[31];

	return 1;
}