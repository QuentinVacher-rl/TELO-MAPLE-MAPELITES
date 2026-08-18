/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:03:45
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_217.4.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.168848, -0.029766, -0.227944, 0.326119, 1.2823, 0.359473, -0.637045, 2.37105, -0.72077, 0.642176};
	{
		double op0 = in1[14];
		double op1 = in1[9];
		double op2 = cst[0];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}


double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.349466, -0.356342, 0.404611, -1.63767, 1.39947, 0.744682, 0.949665, -0.686875, 0.828377, -0.521692};
	{
		double op0 = in1[9];
		double op1 = cst[7];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.276153, -0.074715, -0.266582, -0.550343, -0.35868, 0.230804, 0.017558, -1.78129, 0.100053, 0.583744};
	{
		double op0 = in1[23];
		double op1 = cst[1];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.53734, 0.292955, -0.361609, -0.774193, 0.070717, -0.105272, -0.387637, -0.156221, 0.843301, -0.254613};
	{
		double op0 = in1[0];
		double op1 = in1[26];
		double op2 = cst[0];
		double op3 = cst[6];
		reg[7] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = in1[6];
		double op1 = reg[7];
		double op2 = cst[5];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}



double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.011973, -1.88817, -0.733345, -0.116868, 0.798484, 0.882581, -0.908634, 0.586306, 0.649348, 0.225318};
	{
		double op0 = in1[1];
		double op1 = cst[0];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.154306, -0.197818, -0.202847, 0.839342, 0.297899, 0.073272, -0.551034, 0.817755, 0.746473, -0.757931};
	return reg[0];
}


a0 = i14 * i9 * -0.168848
a1 = tan(i9 * -0.686875)
a2 = sun(i23 * -0.074715)
a3 = (i0 * 0.53734 + i26 * 0.378637) * i6 * -0.105272
a4 = tan(i1 * -0.011973)
a5 = 0
a6 =  i23 * 0.029767 + sin(i9 * -0.375265) * 1.3311
a7 = 0

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.375265, 1.3311, 0.212698, 0.166285, 1.18703, 0.3144, 0.044302, 0.029767, -1.21497, -0.755052};
	{
		double op0 = in1[9];
		double op1 = cst[0];
		reg[2] = sin(op0 * op1);
	}
	{
		double op0 = in1[23];
		double op1 = reg[2];
		double op2 = cst[7];
		double op3 = cst[1];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.884769, 0.955835, 0.077017, -0.594945, 0.280552, -0.083441, -0.757883, 0.967326, -0.155712, -0.530337};
	return reg[0];
}
