/* ���� ������ ���ϴ� ���α׷� */
#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	float radius;
	float area;

	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%f", &radius);

	area = 3.141592 * radius * radius;
	printf("���� ���� : %f \n", area);
}