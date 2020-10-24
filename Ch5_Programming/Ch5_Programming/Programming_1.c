#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int input1, input2;
	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &input1, &input2);

	printf("몫: %d ", input1 / input2);
	printf("나머지 : %d", input1 % input2);

	return 0;
}
