/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 19:54:33
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_497.2.p4.walker2d_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.006675, 0.305187, -0.199797, 0.495865, -0.507476, 1.68176, -0.537465, 0.337531, -0.877675, -0.749245};
	{
		double op0 = in1[1];
		double op1 = cst[6];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.404679, 0.426648, 0.320042, 1.463, 0.61724, -0.404398, 0.970815, 0.241095, -0.466399, -0.951443};
	{
		double op0 = reg[0];
		double op1 = in1[3];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.107558, 0.219654, -0.542132, -0.643591, -0.078595, -0.571146, -0.656705, 0.467977, 0.165833, 1.7856};
	{
		double op0 = in1[14];
		reg[3] = cos(op0);
	}
	{
		double op0 = in1[10];
		double op1 = reg[3];
		double op2 = cst[1];
		double op3 = cst[1];
		reg[4] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[4];
		double op1 = in1[8];
		double op2 = cst[5];
		double op3 = cst[5];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.166378, 0.231255, 0.320042, 0.493699, 0.541077, -0.414019, 0.970815, 0.173519, 0.263141, -0.3222};
	{
		double op0 = in1[3];
		reg[3] = cos(op0);
	}
	{
		double op0 = reg[3];
		double op1 = in1[0];
		double op2 = cst[0];
		double op3 = cst[6];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.76448, 0.251618, -1.06826, 0.029618, 0.470113, 0.03741, -0.228794, -0.591815, -0.943973, -0.961456};
	{
		double op0 = in1[8];
		double op1 = cst[4];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.791394, -0.525667, 1.29634, -0.887826, -0.254475, 0.249592, -0.760578, -0.173635, -0.474316, 0.473803};
	{
		double op0 = in1[9];
		reg[3] = sin(op0);
	}
	{
		double op0 = in1[3];
		double op1 = reg[3];
		double op2 = cst[7];
		double op3 = cst[1];
		reg[2] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[2];
		double op1 = in1[10];
		double op2 = cst[6];
		double op3 = cst[1];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}
