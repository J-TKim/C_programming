# include <stdio.h>
# pragma warning (disable:4996)

double main(void) {

	double num[5] = { 1,2,3,4,5 };
	double* p = num;
	double sum = 0;

	for (int i = 0; i < 5; i++)
		sum += num[i];
	printf("�迭 �̿��� sum: %lf\n", sum);

	sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *(p + i);
	}
	printf("*(p+i) �̿��� sum: %lf\n", sum);

	sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *p;
		*p++;
	}
	printf("*p++ �̿��� sum: %lf\n", sum);
}