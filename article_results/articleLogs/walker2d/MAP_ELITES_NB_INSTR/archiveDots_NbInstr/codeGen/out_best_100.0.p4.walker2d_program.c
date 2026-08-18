/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 17:01:10
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_100.0.p4.walker2d_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.206051, 0.266099, -0.457418, 0.747277, 0.400227, -1.54365, -1.00282, 0.727937, -0.196992, 0.622696};
	{
		double op0 = in1[0];
		double op1 = cst[4];
		reg[2] = sin(op0 * op1);
	}
	{
		double op0 = in1[0];
		double op1 = reg[2];
		double op2 = cst[2];
		reg[6] = op0 * op1 * op2;
	}
	{
		double op0 = reg[6];
		double op1 = in1[9];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.453522, -0.529665, -0.481967, 1.327, 0.805492, -0.953287, -0.997306, 0.566229, -0.507031, 0.210797};
	{
		double op0 = in1[16];
		reg[0] = cos(op0);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.746775, -0.999512, 0.641877, 0.164768, -0.814512, -0.659983, 1.62436, 0.276186, 0.022239, -0.688915};
	{
		double op0 = in1[15];
		double op1 = in1[8];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.89256, -0.207793, -0.149668, -0.76453, -0.94045, 0.665113, 1.50258, 0.447554, -0.334721, 0.264229};
	{
		double op0 = in1[0];
		double op1 = in1[9];
		double op2 = cst[6];
		double op3 = cst[3];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.727493, -0.495308, 0.600925, 0.174748, 1.50027, 0.703501, -3.49368, -0.552312, -0.42518, 0.279533};
	{
		double op0 = in1[2];
		double op1 = cst[5];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.739969, -0.330579, 0.792424, 0.262371, 0.593262, 0.703501, -0.746401, -0.552312, -0.416317, 0.279533};
	{
		double op0 = in1[6];
		double op1 = cst[4];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}
