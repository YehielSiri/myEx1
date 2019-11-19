#include "myMath.h"
#define E 2.7182

double Exp(int x) {
	// 'E' is the base; 'x' is the power
	
	int power;					// the power counter
	double exp = 1;				// 'exp' keeps the exponent function result
	
	power = x;
	while(power > 0) {
		exp *= E;
		power--;
	}
	
	return exp;
}

double Pow(double x, int y) {
	// 'x' is the base; 'y' is the power
	
	int power;					// counter of the power.
	double result = 1;				// keep the anser to return

	for(power = 0; power < y; power++) {
		result = (result * x);
	}
	
	return result;
}