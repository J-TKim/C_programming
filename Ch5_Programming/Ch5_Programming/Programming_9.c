#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double s_h, s_l, d;
	
	printf("�������� ���̸� �Է��Ͻÿ� : ");
	scanf("%lf", &s_h);

	printf("������ �׸����� ���̸� �Է��Ͻÿ� : ");

	scanf("%lf", &s_l);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� : ");
	scanf("%lf", &d);

	double p_h = s_h * d / s_l;
	printf("�Ƕ�̵��� ���̴� %f�Դϴ�.", p_h);

	return 0;
}
