/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-14 10:39:36
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_4773.1.p4.humanoid_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.260309, 0.945097, 0.507107, 0.706767, 1.15382, 0.498699, -0.439722, 0.296382, -0.356771, -0.590477};
	{
		double op0 = in1[71];
		double op1 = in1[371];
		reg[5] = op0 % op1;
	}
	{
		double op0 = in1[226];
		double op1 = reg[5];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.84022, -0.48358, -0.159247, -0.552405, -0.225544, -0.328822, 0.238856, 0.415911, 0.820032, -0.526549};
	{
		double op0 = reg[0];
		double op1 = cst[3];
		reg[3] = exp(op0 * op1);
	}
	{
		double op0 = reg[3];
		double op1 = reg[3];
		double op2 = cst[1];
		double op3 = cst[2];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.415692, 2.43833, -0.091085, -0.303991, -0.768608, 0.435214, -0.466947, -0.294074, 0.683363, -0.133181};
	{
		double op0 = reg[4];
		double op1 = in1[30];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.046618, -1.69777, -0.620108, -0.335255, 0.17074, 0.124353, 0.837538, -0.053638, -0.395124, -0.415061};
	{
		double op0 = in1[139];
		double op1 = cst[5];
		reg[0] = log(op0 * op1);
	}
	{
		double op0 = in1[199];
		double op1 = reg[0];
		double op2 = cst[8];
		double op3 = cst[1];
		reg[2] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[2];
		double op1 = cst[1];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.841084, -0.354454, -0.436915, 0.388727, 0.526014, -0.25078, 0.983171, -0.989681, -0.219314, -0.060223};
	{
		double op0 = in1[18];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.736242, 0.104136, -0.733656, -0.168993, 0.844443, -0.591166, 0.185605, 0.365158, 0.934049, 0.087172};
	{
		double op0 = in1[162];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.533036, -0.675536, 0.731454, 0.437384, 0.697628, -0.395931, -0.118802, 0.336508, -0.565663, -0.21783};
	{
		double op0 = in1[326];
		double op1 = cst[2];
		reg[3] = sin(op0 * op1);
	}
	{
		double op0 = reg[3];
		double op1 = reg[4];
		double op2 = cst[1];
		reg[1] = op0 * op1 * op2;
	}
	{
		double op0 = reg[1];
		double op1 = cst[4];
		reg[2] = exp(op0 * op1);
	}
	{
		double op0 = reg[1];
		double op1 = reg[5];
		double op2 = cst[9];
		double op3 = cst[7];
		reg[7] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[7];
		double op1 = reg[2];
		reg[6] = ((op0) < (op1)) ? (op1) : (op0);
	}
	{
		double op0 = reg[6];
		reg[0] = cos(op0);
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.364755, 0.04497, -0.132382, -0.573039, 1.26728, 0.846226, -0.326071, -0.580018, -0.249973, -0.773268};
	{
		double op0 = reg[7];
		double op1 = in1[263];
		reg[4] = op0 / op1;
	}
	{
		double op0 = reg[4];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.841084, -0.443779, -0.436915, 0.388727, 0.526014, -0.25078, 1.79723, -0.989681, -0.197572, -0.091531};
	{
		double op0 = in1[18];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.387078, 0.135412, -0.426866, -0.506212, -0.082697, -0.269524, -0.406103, 1.24311, 1.42761, 0.223043};
	{
		double op0 = reg[6];
		reg[1] = log(op0);
	}
	{
		double op0 = in1[139];
		double op1 = reg[1];
		double op2 = cst[4];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.010819, -0.167596, 0.619648, -0.940787, -0.414211, 0.496721, -0.697628, 1.13608, 0.658998, 0.122776};
	{
		double op0 = in1[145];
		reg[0] = sin(op0);
	}
	{
		double op0 = reg[0];
		reg[5] = log(op0);
	}
	{
		double op0 = reg[5];
		double op1 = cst[8];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.395596, -0.037966, 0.215426, 0.411542, -0.290203, 0.227388, 0.267691, 0.758745, 0.092396, 0.581081};
	{
		double op0 = in1[222];
		double op1 = cst[5];
		reg[7] = log(op0 * op1);
	}
	{
		double op0 = reg[7];
		reg[0] = cos(op0);
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.248837, 1.25238, -0.189261, -1.23199, -0.412358, -0.927697, -1.04426, -0.766037, 1.08422, 0.400749};
	{
		double op0 = reg[4];
		reg[6] = log(op0);
	}
	{
		double op0 = reg[6];
		double op1 = in1[203];
		reg[4] = ((op0) < (op1)) ? (op1) : (op0);
	}
	{
		double op0 = reg[4];
		double op1 = reg[4];
		double op2 = cst[8];
		reg[7] = op0 * op1 * op2;
	}
	{
		double op0 = reg[7];
		double op1 = cst[7];
		reg[2] = exp(op0 * op1);
	}
	{
		double op0 = reg[2];
		double op1 = cst[9];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P13(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.098433, -0.736635, -0.10077, 0.04447, -0.360968, 0.443761, 0.029146, 0.681766, 0.431942, 1.16736};
	{
		double op0 = reg[7];
		double op1 = in1[308];
		double op2 = cst[1];
		reg[2] = op0 / op1 * op2;
	}
	{
		double op0 = reg[2];
		reg[4] = tan(op0);
	}
	{
		double op0 = reg[4];
		double op1 = reg[4];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P14(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.32413, -0.069488, -1.04176, -0.28527, 0.96561, -0.691725, 0.132946, 0.849888, -0.531578, 0.455654};
	{
		double op0 = in1[97];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P15(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.347263, -0.682812, 0.456823, -0.613231, -0.29495, -0.642012, -0.171537, 0.934598, -0.371676, 0.457724};
	{
		double op0 = in1[73];
		double op1 = cst[9];
		reg[3] = log(op0 * op1);
	}
	{
		double op0 = reg[3];
		double op1 = reg[7];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P16(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.435511, 0.760839, -0.651221, 0.930629, 0.364538, -0.330326, 0.471155, -0.446549, -0.689228, 1.40263};
	{
		double op0 = reg[3];
		double op1 = in1[291];
		reg[0] = op0 - op1;
	}
	return reg[0];
}
