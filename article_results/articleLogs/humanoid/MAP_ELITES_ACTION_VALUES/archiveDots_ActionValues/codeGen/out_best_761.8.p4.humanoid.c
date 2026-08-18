/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-14 10:38:00
 * With the CodeGen::TPGGenerationEngine.
 */

#include "out_best_761.8.p4.humanoid.h"
#include "out_best_761.8.p4.humanoid_program.h"
#include <limits.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bestProgram(double *results, int nb) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
	return bestProgram;
}

void activationFunction(double *actions) {
	for (size_t i = 0; i < 17; i++) {
		if(isnan(actions[i])) actions[i] = -INFINITY;

		actions[i] = tanh(actions[i]);
	}
}

enum vertices {A9999377, };

void inferenceTPG(double* actions) {

	enum vertices currentVertex = A9999377;
	while(1) {
		switch (currentVertex) {
		case A9999377: {
				actions[0] = P0();
				actions[1] = P1();
				actions[2] = P2();
				actions[3] = P3();
				actions[4] = P4();
				actions[5] = P5();
				actions[6] = P6();
				actions[7] = P7();
				actions[8] = P8();
				actions[9] = P9();
				actions[10] = P10();
				actions[11] = P11();
				actions[12] = P12();
				actions[13] = P13();
				actions[14] = P14();
				actions[15] = P15();
				actions[16] = P16();
				return activationFunction(actions);
			}
		}
	}
}
