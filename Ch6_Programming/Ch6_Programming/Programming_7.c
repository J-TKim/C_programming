#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double h, w, s_w;

	printf("체중과 키를 입력하시오 : ");
	scanf("%lf %lf", &w, &h);

	s_w = (h - 100) * 0.9;
	
	if (w < s_w)
		printf("저체중 입니다");
	else if (w > s_w)
		printf("과체중 입니다");
	else
		printf("표준체중 입니다");
	return 0;
}