#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	float mile;
	double meter;

	printf("마일을 입력하시오: ");
	scanf("%f", &mile);

	meter = 1609.0 * mile;

	printf("%.1f마일은 %lf미터 입니다.", mile, meter);

	return 0;
}