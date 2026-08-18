/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-17 02:20:32
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_379.1.p4.hopper_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.1448, -0.040715, -0.896213, -1.13385, 0.260359, 0.415575, 0.370546, 0.622132, 0.289563, 0.437531};
	{
		double op0 = in1[0];
		double op1 = cst[8];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.21904, 0.880826, 0.02223, 0.525043, -0.069482, 0.692544, 0.938738, 0.472104, -2.38922, -0.160151};
	{
		double op0 = in1[7];
		double op1 = reg[0];
		double op2 = cst[8];
		double op3 = cst[7];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.3741, 0.143591, -0.673298, -2.97828, -0.214262, -0.844822, -0.663974, -0.952648, -0.131624, -0.480013};
	{
		double op0 = in1[0];
		double op1 = cst[3];
		reg[2] = tan(op0 * op1);
	}
	{
		double op0 = in1[3];
		double op1 = reg[2];
		double op2 = cst[9];
		double op3 = cst[2];
		reg[2] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[2];
		reg[0] = sin(op0);
	}
	{
		double op0 = in1[0];
		double op1 = cst[0];
		reg[1] = cos(op0 * op1);
	}
	{
		double op0 = reg[1];
		reg[1] = log(op0);
	}
	{
		double op0 = reg[0];
		double op1 = reg[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}
