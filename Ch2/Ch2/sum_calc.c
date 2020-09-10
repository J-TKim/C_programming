// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
#pragma warning (disable : 4996)
#include <stdio.h>

int main(void) {
	// 정수를 지정할 변수 선언
	int x, y, sum;

	// 하나의 정수를 입력받아 x에 저장
	printf("첫번째 숫자를 입력하시오:");
	scanf("%d", &x);

	// 하나의 정수를 입력받아 y에 저장
	printf("두번째 숫자를 입력하시오:");
	scanf("%d", &y);

	// 계산 후 출력
	sum = x + y;
	printf("두 수의 합: %d", sum);

	return 0;
}