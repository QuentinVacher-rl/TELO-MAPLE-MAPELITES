/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-21 04:37:35
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_560.9.p4.hopper_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-2.94625, 0.593211, -0.93222, 0.518775, 0.266125, 0.361514, 0.554582, 0.256925, -1.23532, -0.310329};
	{
		double op0 = reg[7];
		double op1 = in1[7];
		double op2 = cst[8];
		double op3 = cst[0];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.155677, 1.38559, 0.867847, 0.443565, 0.504934, 0.843371, 0.561543, -0.771845, 0.253902, -0.555057};
	{
		double op0 = in1[6];
		double op1 = in1[9];
		double op2 = cst[7];
		double op3 = cst[7];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.676667, -0.35213, 0.755922, 0.540694, -1.52181, -0.407126, 0.821327, -0.372234, 0.452755, 0.051503};
	{
		double op0 = in1[0];
		reg[0] = tan(op0);
	}
	{
		double op0 = in1[4];
		double op1 = cst[7];
		reg[5] = exp(op0 * op1);
	}
	{
		double op0 = in1[5];
		double op1 = reg[0];
		reg[2] = op0 - op1;
	}
	{
		double op0 = reg[5];
		double op1 = reg[2];
		double op2 = cst[4];
		double op3 = cst[6];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}
