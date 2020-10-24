#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int input, count;

	printf("정수를 입력하시오:");
	scanf("%d", &input);

	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &count);

	printf("%d<<%d의 값: %d", input, count, input << count);

	return 0;
}
