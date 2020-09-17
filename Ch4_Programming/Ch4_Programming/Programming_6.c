#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double x, y;
	x = 3.32e-3;
	y = 9.76e-8;

	printf("%f", x + y);
	
	return 0;
}