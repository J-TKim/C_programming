#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double earth_weight, moon_weight;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%lf", &earth_weight);

	moon_weight = earth_weight * 0.17;

	printf("�޿����� �����Դ� %lf�Դϴ�.", moon_weight);
	
	return 0;
}