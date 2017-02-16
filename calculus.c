#include "calculus.h"

double integrate(double (*fn)(double), double l, double u)
{
	double sum;
	double step;

	sum = 0;
	step = 0.001;

	while (l < u) {
		sum += (fn(l) + fn(l + step)) * step / 2;
		l += step;
	}
	
	return sum;
}
