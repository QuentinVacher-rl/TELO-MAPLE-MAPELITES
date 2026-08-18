/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:04:26
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_1773.8.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.06766, 4.46365, -0.199249, -0.092304, -1.11389, 0.415167, 0.289463, -0.154768, 0.126082, -0.235777};
	{
		double op0 = in1[10];
		double op1 = in1[11];
		double op2 = cst[3];
		double op3 = cst[2];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.232586, 0.294651, 0.827542, -0.056002, 1.62256, 0.973025, 0.542658, 0.426435, -0.234712, -0.052758};
	{
		double op0 = in1[10];
		double op1 = cst[9];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}


double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.25468, 0.154631, 0.839094, -0.474544, -0.195633, -1.22643, 0.090591, 0.753619, 0.295673, 0.211182};
	{
		double op0 = in1[7];
		double op1 = in1[5];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.224335, 0.336189, 1.40269, -0.056002, 1.22714, 1.00837, 0.542658, 0.595264, -0.234712, -0.074121};
	{
		double op0 = in1[10];
		double op1 = cst[9];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.637491, 0.085352, -0.772727, 1.27959, -0.80042, -0.5715, -0.707027, 0.473929, -0.935966, -0.135641};
	{
		double op0 = in1[9];
		double op1 = cst[2];
		reg[7] = tan(op0 * op1);
	}
	{
		double op0 = reg[7];
		double op1 = in1[4];
		double op2 = cst[4];
		double op3 = cst[4];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}



double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.734929, 0.08988, -0.991341, -0.551396, -0.322063, 0.868545, 0.425453, -0.553445, -0.237111, 0.483883};
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.645365, 1.04529, -1.36593, 0.585278, 0.223835, 0.005992, 0.220838, 1.24424, -0.560358, 0.433432};
	{
		double op0 = in1[13];
		double op1 = cst[1];
		reg[0] = cos(op0 * op1);
	}
	{
		double op0 = in1[9];
		double op1 = reg[0];
		double op2 = cst[2];
		double op3 = cst[6];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}


a0 = -(i10 * 0.092304 + i11 * 0.199249)
a1 = sin(i10 * -0.052758)
a2 = i7 - i5
a3 = sin(i1° * -0.074121)
a4 = (i4 - tan(i9 * -0.772727)) * 0.80042 
a5 = 0
a6 = cos(i13 * 1.04529) * 0.220838 - i9 * 1.36594
a7 = i9 - i17 * -0.008194

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.081564, 0.082903, -0.008194, 1.16359, -0.940535, 0.211395, -0.697856, 0.102878, 0.330455, -1.06101};
	{
		double op0 = in1[17];
		double op1 = in1[9];
		double op2 = cst[2];
		double op3 = cst[2];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}
