/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-14 10:38:49
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_3857.5.p4.humanoid_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.884197, 0.59546, 0.006874, 0.519535, -0.828363, 0.388229, 0.460998, 0.896556, -0.277041, 0.943411};
	{
		double op0 = in1[116];
		reg[2] = cos(op0);
	}
	{
		double op0 = in1[131];
		double op1 = reg[2];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.20745, 0.594125, -0.535349, -0.805147, -0.863574, -0.812824, 0.869229, 0.347692, -0.427092, -0.739015};
	{
		double op0 = in1[88];
		double op1 = in1[236];
		reg[4] = op0 + op1;
	}
	{
		double op0 = reg[4];
		double op1 = reg[7];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.989869, -0.040585, -0.00994, 0.224054, 0.088109, 1.20687, -0.492405, 0.081613, 0.913747, -0.240576};
	{
		double op0 = in1[114];
		double op1 = in1[68];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.04037, 0.629142, 0.061967, -0.8577, -0.66254, 0.409403, -1.36234, -0.268064, -0.397669, -0.992672};
	{
		double op0 = in1[228];
		double op1 = reg[0];
		double op2 = cst[1];
		double op3 = cst[7];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.080287, 0.434321, 0.761793, 0.261211, -0.818429, 0.806028, -0.146748, 0.93502, -0.675713, 0.221187};
	{
		double op0 = in1[1];
		double op1 = cst[9];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.445947, 0.25254, -0.80563, 0.737111, 0.878405, -1.88212, -0.434771, -0.709202, -0.564547, -0.816769};
	{
		double op0 = in1[37];
		double op1 = cst[4];
		reg[1] = exp(op0 * op1);
	}
	{
		double op0 = reg[1];
		double op1 = cst[5];
		reg[7] = exp(op0 * op1);
	}
	{
		double op0 = reg[7];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.118868, -1.06751, 0.878993, -0.567315, -1.19482, -0.352323, -1.44868, 0.34964, 0.500254, -0.558791};
	{
		double op0 = reg[1];
		double op1 = cst[7];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.268973, -0.049717, 0.595777, 0.070998, 1.25025, -0.672622, 0.209012, -0.069138, -0.455693, 0.442045};
	{
		double op0 = in1[132];
		double op1 = in1[116];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.227395, 0.389694, 0.235814, 0.492604, -0.859827, -0.163929, 0.372336, -0.587797, 0.914393, 0.301013};
	{
		double op0 = in1[157];
		double op1 = in1[350];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.23866, 0.095314, 0.632512, 0.499791, 0.692491, 0.935979, -0.959585, -0.791769, 0.973068, -0.614455};
	{
		double op0 = in1[141];
		double op1 = reg[7];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.441406, 0.007275, -0.27529, 0.214957, 0.12224, 0.774183, -0.038844, -0.29893, 0.457353, -0.399235};
	{
		double op0 = in1[1];
		double op1 = cst[0];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.080467, 0.346402, -0.74635, -0.614963, -1.02208, -0.447816, 0.602634, -0.343131, 0.809284, 0.008758};
	{
		double op0 = reg[4];
		double op1 = reg[7];
		double op2 = cst[1];
		reg[0] = op0 / op1 * op2;
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.388044, 0.032161, -0.388497, -0.225498, 1.08807, -0.725939, 0.464598, -0.308887, 0.37489, 0.174148};
	{
		double op0 = in1[62];
		double op1 = in1[145];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P13(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.263258, 0.037055, 0.524849, -1.42567, 0.318543, 0.405486, -1.14884, -0.644654, 0.618191, 0.256714};
	{
		double op0 = in1[137];
		double op1 = in1[156];
		reg[0] = op0 % op1;
	}
	return reg[0];
}

double P14(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.461901, -0.684196, -0.51359, -0.871058, 0.662361, 0.088869, -1.04071, -0.107533, -0.280197, -0.742226};
	{
		double op0 = in1[296];
		double op1 = cst[8];
		reg[6] = sin(op0 * op1);
	}
	{
		double op0 = in1[25];
		double op1 = reg[6];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P15(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.227395, 0.389694, 0.235814, 0.492604, -0.859827, -0.163929, 0.372336, -0.587797, 0.914393, 0.301013};
	{
		double op0 = in1[157];
		double op1 = in1[350];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P16(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.066656, -0.578436, -1.09108, -1.04099, -0.162302, -0.146945, -0.038532, 0.282493, 0.070535, -0.906154};
	{
		double op0 = in1[86];
		double op1 = cst[2];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}
