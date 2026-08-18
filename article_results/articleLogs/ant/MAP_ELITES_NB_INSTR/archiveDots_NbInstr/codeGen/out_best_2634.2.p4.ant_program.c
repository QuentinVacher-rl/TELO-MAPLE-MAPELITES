/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:03:33
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_2634.2.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.0859, 0.912833, -0.365147, -0.373111, 0.005048, 0.068396, -0.173356, -0.221171, 0.501951, 0.525152};
	{
		double op0 = in1[11];
		double op1 = in1[0];
		double op2 = cst[6];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.11027, -0.420636, -0.144653, -0.547084, -0.375461, -0.079871, 0.77809, 0.314977, 0.269959, -0.415816};
	{
		double op0 = in1[0];
		double op1 = cst[5];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.234541, 0.369774, 0.58668, 0.302816, 0.534975, 0.112671, 0.681437, -0.055258, -0.171671, 0.621449};
	{
		double op0 = in1[9];
		reg[0] = sin(op0);
	}
	return reg[0];
}



double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.384269, 0.326723, 0.485159, 0.292124, -0.474126, 0.604824, 0.049473, 0.251894, -1.73909, -0.680011};
	{
		double op0 = in1[5];
		double op1 = in1[0];
		double op2 = cst[4];
		double op3 = cst[7];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.931216, 0.333437, -0.623583, 0.675939, 4.54657, 1.17503, 0.079183, -0.527387, -0.416298, 0.329922};
	{
		double op0 = in1[10];
		double op1 = reg[6];
		double op2 = cst[5];
		double op3 = cst[1];
		reg[3] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = in1[4];
		double op1 = reg[3];
		double op2 = cst[5];
		double op3 = cst[2];
		reg[5] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[5];
		double op1 = cst[1];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}




double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.003656, 1.41685, 0.249338, 0.734404, -0.643662, -0.625202, -1.10563, 0.769725, 0.742717, -0.261126};
	{
		double op0 = reg[4];
		double op1 = in1[0];
		double op2 = cst[1];
		double op3 = cst[0];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.751155, -1.80717, -1.08385, -0.235562, -0.583565, -0.876409, -0.05787, -1.09258, -0.267002, -0.809739};
	{
		double op0 = in1[26];
		double op1 = cst[9];
		reg[1] = tan(op0 * op1);
	}
	{
		double op0 = in1[9];
		double op1 = reg[1];
		double op2 = cst[7];
		double op3 = cst[1];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.501235, 0.570434, -0.53367, 0.477385, -0.106574, 0.073254, -0.481604, 1.20696, 0.607616, 0.292852};
	{
		double op0 = in1[1];
		double op1 = in1[9];
		double op2 = cst[5];
		double op3 = cst[9];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}


a0 = i11 * i0 * -0.173356
a1 = sin(i0 * -0.079871)
a2 = sin(i9)
a3 = -(i5 * 0.474126 + i0 * 0.251894)
a4 = tan((i4 + i10 * 0.623583) * 0.391798)
a5 = i0 * -0.003656
a6 = tan(i26 * -0.809739) * 1.80717 - i9 * 1.09258
a7 = i1 * 0.073254 - i9 * 0.292852