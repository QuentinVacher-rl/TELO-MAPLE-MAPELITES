/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-17 01:42:00
 * With the CodeGen::TPGGenerationEngine.
 */

#include "out_best_223.0.p4.half_cheetah.h"
#include "out_best_223.0.p4.half_cheetah_program.h"
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
	for (size_t i = 0; i < 6; i++) {
		if(isnan(actions[i])) actions[i] = -INFINITY;

		actions[i] = tanh(actions[i]);
	}
}

enum vertices {A1966773, };

void inferenceTPG(double* actions) {

	enum vertices currentVertex = A1966773;
	while(1) {
		switch (currentVertex) {
		case A1966773: {
				actions[0] = P0();
				actions[1] = P1();
				actions[2] = P2();
				actions[3] = P3();
				actions[4] = P4();
				actions[5] = P5();
				return activationFunction(actions);
			}
		}
	}
}
