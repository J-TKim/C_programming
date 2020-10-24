#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int input1, input2, input3;
	printf("3개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &input1, &input2, &input3);

	int max;

	max = (input1 > input2) ? input1 : input2;
	max = (max > input3) ? max : input3;
	printf("최대값:%d", max);

	return 0;
}
