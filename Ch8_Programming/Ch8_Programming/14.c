#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

double get_distance(double x1, double y1, double x2, double y2) {
	double d;

	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	return d;
}

int main(void) {
	double x1, x2, y1, y2, d;
	printf("첫 번째 점의 좌표를 입력하시오: (x, y)");
	scanf("%lf %lf", &x1, &y1);

	printf("두 번째 점의 좌표를 입력하시오: (x, y)");
	scanf("%lf %lf", &x2, &y2);

	d = get_distance(x1, y1, x2, y2);

	printf("두점 사이의 거리는 %lf입니다.", d);
}