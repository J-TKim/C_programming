#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double dist, degree, circ, radius;

	printf("�Ÿ��� �Է��Ͻÿ� : ");
	scanf("%f", &dist);

	printf("������ �Է��Ͻÿ� : ");
	scanf("%f", &degree);

	circ = (360.0 * 900.0) / 7.2;
	radius = circ / (2.0 * 3.14);
	printf("������ �������� %f", radius);

	return 0;
}
