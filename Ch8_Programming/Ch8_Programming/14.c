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
	printf("ù ��° ���� ��ǥ�� �Է��Ͻÿ�: (x, y)");
	scanf("%lf %lf", &x1, &y1);

	printf("�� ��° ���� ��ǥ�� �Է��Ͻÿ�: (x, y)");
	scanf("%lf %lf", &x2, &y2);

	d = get_distance(x1, y1, x2, y2);

	printf("���� ������ �Ÿ��� %lf�Դϴ�.", d);
}