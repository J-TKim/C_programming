#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x, y, z, min;
	
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &x, &y, &z);

	min = x;

	if (min > y)
		min = y;

	if (min > z)
		min = z;

	printf("���� ���� ������ %d�Դϴ�.", min);
	return 0;
}
