/**
 * File generated with GEGELATI v2.0.0
 * On the 2025-11-27 13:59:24
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_28.3.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.052575, 0.151326, 0.237725, 0.272897, -0.738341, 0.103929, -0.791007, 1.76214, -0.296943, -0.624914};
	{
		double op0 = in1[4];
		double op1 = in1[11];
		double op2 = cst[5];
		double op3 = cst[2];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.088316, 0.014562, -1.16585, -0.898861, 0.45519, 0.027763, -0.03077, 0.625878, -0.077116, 0.229134};
	{
		double op0 = in1[6];
		double op1 = cst[8];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.32536, 1.88827, -0.57597, -0.050312, -0.48891, -0.169568, 0.212668, -1.23208, 1.5006, -0.099838};
	{
		double op0 = in1[5];
		reg[0] = sin(op0);
	}
	{
		double op0 = in1[7];
		double op1 = reg[0];
		reg[1] = op0 - op1;
	}
	{
		double op0 = in1[4];
		double op1 = in1[9];
		reg[0] = op0 * op1;
	}
	{
		double op0 = reg[1];
		double op1 = reg[0];
		double op2 = cst[0];
		double op3 = cst[1];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}


double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.460744, 1.32196, -0.04277, 1.22742, 0.010119, -0.229602, -0.764968, -0.246296, 1.23897, -0.29707};
	{
		double op0 = in1[9];
		double op1 = reg[1];
		double op2 = cst[5];
		double op3 = cst[5];
		reg[4] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = reg[4];
		double op1 = in1[15];
		double op2 = cst[7];
		double op3 = cst[4];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.913699, 0.3125, 0.170028, -0.08558, 0.430906, -1.81293, -0.623859, -0.345756, -0.779609, 0.646254};
	{
		double op0 = reg[5];
		double op1 = in1[0];
		double op2 = cst[7];
		double op3 = cst[3];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.424968, 0.076638, 0.003457, -0.922163, -0.323916, 0.561823, 0.681187, 0.819088, -0.244308, -0.016137};
	return reg[0];
}


double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.471788, -2.42672, 0.036908, -0.497158, 0.603063, -0.256715, 0.194476, -0.939648, 0.036761, 0.19377};
	{
		double op0 = in1[23];
		double op1 = cst[5];
		reg[2] = cos(op0 * op1);
	}
	{
		double op0 = reg[2];
		double op1 = in1[23];
		reg[5] = op0 / op1;
	}
	{
		double op0 = reg[5];
		double op1 = in1[9];
		reg[0] = op0 - op1;
	}
	return reg[0];
}


double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.538364, -0.2394, 0.836684, 0.085179, -1.56664, -0.831742, 1.13863, 0.954144, 0.050121, -0.636571};
	{
		double op0 = reg[7];
		double op1 = in1[0];
		double op2 = cst[2];
		double op3 = cst[1];
		reg[3] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[3];
		double op1 = in1[9];
		double op2 = cst[6];
		double op3 = cst[0];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

a0 = i4 * 0.103929 + i11 * 0.237725
a1 = tan(i6 * -0.077116)
a2 = (i7 - sin(i5)) * 0.32536 + i4 * i9 * 1.88827
a3 =i9 * 0.229602 * 0.246296 + i15 * 0.010119
a4 = i0 * 0.08558
a5 = 0
a6 = (cos(i23 * -0.256715) / i23) - i9
a7 = i0 * 0.2394 * 1.13863 - i9 * 0.538364