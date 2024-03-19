#include <stdio.h>
#include <math.h>
#include <gsl/gsl_rng.h>

#define N 1000

int main (void) {
	gsl_rng * r = gsl_rng_alloc(gsl_rng_taus);

	double x, y;
	double pts_in, pts_total = 0;

	for (int i = 0; i < N; i++) {
		x = gsl_rng_uniform(r);
		y = gsl_rng_uniform(r);

		pts_total++;
		if (sqrt(pow(x, 2) + pow(y, 2)) < 1) pts_in++;
	}

	printf("n=%d\n", N);
	printf("PI=%f\n", 4 * (pts_in/pts_total));


	gsl_rng_free(r);
	return 0;
}
