// 정수 간의 가감승제를 계산하는 프로그램
#include <stdio.h>

int main(void) {
	//정수를 지정할 변수 선언
	int x, y, sum, diff, mul, div;

	// 변수에 정수 저장
	x = 20;
	y = 10;

	// 변수에 계산 결과들을 저장
	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	// 변수들의 값을 화면에 출력
	printf("두 수의 합: %d\n", sum);
	printf("두 수의 차: %d\n", diff);
	printf("두 수의 곱: %d\n", mul);
	printf("두 수의 몫: %d\n", div);

	return 0;
}