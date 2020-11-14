#include <stdio.h>
#pragma warning(disable:4996)

double recursive(double n) {
	if (n == 0)
		return 0;

	while (n != 0) {
		return 1.0 / n + recursive(n - 1);
	}
	return 0;
}

int main(voud) {
	double n = 10;

	printf("%lf", recursive(n));

	return 0;
}