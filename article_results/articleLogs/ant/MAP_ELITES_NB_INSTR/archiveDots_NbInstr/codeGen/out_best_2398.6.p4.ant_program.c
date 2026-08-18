/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:04:06
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_2398.6.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.501189, -0.594189, -0.723384, 0.027985, 0.890178, -0.709928, 0.205268, -0.107937, 0.346016, 0.517034};
	{
		double op0 = reg[1];
		double op1 = in1[11];
		reg[2] = op0 + op1;
	}
	{
		double op0 = in1[18];
		double op1 = reg[2];
		double op2 = cst[8];
		double op3 = cst[4];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}



double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.201547, -0.988556, 0.293009, 0.155812, -1.3706, -0.119634, -0.033009, -0.098641, -0.140627, 0.117122};
	{
		double op0 = in1[7];
		double op1 = cst[6];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.708358, -0.881016, 0.255052, 0.37192, 0.748675, -0.089439, -0.270386, 0.354613, 0.246109, 1.11762};
	{
		double op0 = reg[0];
		double op1 = in1[7];
		reg[0] = op0 - op1;
	}
	{
		double op0 = reg[0];
		double op1 = in1[6];
		double op2 = cst[0];
		double op3 = cst[2];
		reg[0] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[0];
		double op1 = reg[7];
		double op2 = cst[8];
		double op3 = cst[2];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}



double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.643184, 0.146326, -0.035113, -0.499731, -0.14387, 0.569288, -0.701069, -0.711009, 0.692496, 0.03642};
	{
		double op0 = in1[6];
		double op1 = cst[2];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.833433, -0.1929, 0.928102, -0.004968, -0.588571, -1.41795, 0.052678, 0.366972, -0.883848, 1.62979};
	{
		double op0 = in1[7];
		double op1 = in1[18];
		double op2 = cst[5];
		double op3 = cst[1];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.697641, 0.953958, -0.196654, 0.078021, 0.349074, -0.912649, 0.563883, 0.569172, -0.684637, -0.289848};
	return reg[0];
}


a0 = i18 * 0.346016 - i11 * 0.890178
a1 = sin(i7 * -0.033009)
a2 = i7 * 0.174333 - i6 * 0.062771
a3 = tan(i6 * -0.035113)
a4 = -(i7 * 1.41795 + i18 * 0.1929)
a5 = 0
a6 = tan((i7 + i4) * 0.451407)
a7 = i4 * 0.070592 + i11 * 0.051092

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.50382, 0.192758, -0.429863, -1.22631, 0.247083, 0.451407, 0.219664, 0.59701, 0.031907, -0.605471};
	{
		double op0 = in1[7];
		double op1 = in1[4];
		reg[5] = op0 + op1;
	}
	{
		double op0 = reg[5];
		double op1 = cst[5];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.070592, -0.051092, 1.65716, 0.702633, -0.952364, -0.752594, -0.506198, 0.127016, 0.525333, -0.489952};
	{
		double op0 = in1[4];
		double op1 = in1[11];
		double op2 = cst[0];
		double op3 = cst[1];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}
