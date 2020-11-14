#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

#define PI 3.141592

double sin_degree(double degree) {
	double ret;

	ret = sin(degree * (PI / 180));

	return ret;
}

int main(void) {
	double ret;

	for (double num = 0; num <= 180; num += 10) {
			
		printf("sin(%lf)ÀÇ °ªÀº ", num);

		ret = sin_degree(num);
		printf("%lf\n", ret);
	
	}
	return 0;
}