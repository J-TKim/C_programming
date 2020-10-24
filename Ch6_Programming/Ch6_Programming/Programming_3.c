#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x, y, z, min;
	
	printf("3개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &x, &y, &z);

	min = x;

	if (min > y)
		min = y;

	if (min > z)
		min = z;

	printf("제일 작은 정수는 %d입니다.", min);
	return 0;
}
