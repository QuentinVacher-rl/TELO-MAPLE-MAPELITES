/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-17 02:37:37
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_492.8.p4.hopper_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.264038, -0.522469, 0.263769, 0.779777, -0.576356, 0.298528, -0.22088, 0.505616, -0.097384, -0.21254};
	{
		double op0 = in1[2];
		double op1 = cst[4];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.141957, 0.295327, 2.54632, -0.554706, 0.335703, 0.47632, -0.094576, -0.789901, 0.740568, 0.027083};
	{
		double op0 = in1[1];
		reg[5] = sin(op0);
	}
	{
		double op0 = in1[1];
		double op1 = in1[0];
		double op2 = cst[7];
		double op3 = cst[5];
		reg[0] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[0];
		double op1 = reg[5];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.727727, 0.139256, 0.865484, 2.45894, -0.081922, 2.10811, -0.359952, 0.193438, 0.241403, -1.862};
	{
		double op0 = in1[0];
		double op1 = in1[3];
		reg[0] = op0 + op1;
	}
	{
		double op0 = reg[0];
		reg[0] = tan(op0);
	}
	{
		double op0 = reg[0];
		double op1 = in1[3];
		reg[0] = op0 + op1;
	}
	{
		double op0 = reg[0];
		double op1 = in1[2];
		reg[0] = op0 + op1;
	}
	return reg[0];
}
