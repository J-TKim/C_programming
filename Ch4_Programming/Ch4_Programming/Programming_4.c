#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double width, height, depth, V;
	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &width, &height, &depth);

	V = width * height * depth;

	printf("������ ���Ǵ� %lf�Դϴ�.", V);
	
	return 0;
}