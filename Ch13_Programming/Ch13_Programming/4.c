#include <stdio.h>

struct complex {
	double real;
	double imag;
};

struct complex complex_add(struct complex c1, struct complex c2) {
	double real = c1.real + c2.real;
	double imag = c1.imag + c2.imag;
	
	struct complex sum = { real, imag };

	return sum;
}

int main(void) {
	struct complex c1 = { 1, 2 };
	struct complex c2 = { 2, 3 };
	struct complex sum = complex_add(c1, c2);
	printf("{ %f + %f } \n", sum.real, sum.imag);
	return 0;
}