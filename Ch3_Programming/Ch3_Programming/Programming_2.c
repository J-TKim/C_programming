#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	float mile;
	double meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%f", &mile);

	meter = 1609.0 * mile;

	printf("%.1f������ %lf���� �Դϴ�.", mile, meter);

	return 0;
}