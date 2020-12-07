# include <stdio.h>

int main(void) {

	double x[3];
	double* p = x;

	for (int i = 0; i < 3; i++)
		printf("x[%lf]ÀÇ ÁÖ¼Ò: %p\n", i, p);
}