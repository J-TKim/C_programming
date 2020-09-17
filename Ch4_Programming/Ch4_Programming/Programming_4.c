#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double width, height, depth, V;
	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &width, &height, &depth);

	V = width * height * depth;

	printf("상자의 부피는 %lf입니다.", V);
	
	return 0;
}