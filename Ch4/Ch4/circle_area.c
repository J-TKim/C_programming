/* 원의 면적을 구하는 프로그램 */
#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	float radius;
	float area;

	printf("원의 반지름을 입력하시오 : ");
	scanf("%f", &radius);

	area = 3.141592 * radius * radius;
	printf("원의 면적 : %f \n", area);
}