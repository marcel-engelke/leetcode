#include <stdlib.h>

// Return time taken
double take_train(double t, double tMax, double s, int v)
{
	double r;
	if ((r = t - (long) t)) {
		t += 1.0 - r;
	}
	return ((t += s / v) > tMax) ? -1 : t;
}

// TODO increment vMin by 1 before this
int calc_v(int vBest, int vMin, int vMax)
{
	int v;
	for ( ; ; vMin++) {
		
	}

	return v;
}

int minSpeedOnTime(int* dist, int n, double tMax)
{
	int v, vMin, vMax, vAvg;
	float t = 0.0;
	// Arrival on time impossible
	if (tMax / n < 1) {
		return -1;
	}
	vMin = 1;
	vMax = tMax / n;
	while (1) {
		
	}
	

	return vMin;
}
