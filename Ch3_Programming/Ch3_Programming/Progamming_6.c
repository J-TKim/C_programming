#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double earth_weight, moon_weight;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%lf", &earth_weight);

	moon_weight = earth_weight * 0.17;

	printf("달에서의 몸무게는 %lf입니다.", moon_weight);
	
	return 0;
}