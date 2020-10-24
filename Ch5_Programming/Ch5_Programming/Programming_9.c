#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double s_h, s_l, d;
	
	printf("지팡이의 높이를 입력하시오 : ");
	scanf("%lf", &s_h);

	printf("지팡이 그림자의 길이를 입력하시오 : ");

	scanf("%lf", &s_l);

	printf("피라미드까지의 거리를 입력하시오 : ");
	scanf("%lf", &d);

	double p_h = s_h * d / s_l;
	printf("피라미드의 높이는 %f입니다.", p_h);

	return 0;
}
