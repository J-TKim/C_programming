#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double h, w, s_w;

	printf("ü�߰� Ű�� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &w, &h);

	s_w = (h - 100) * 0.9;
	
	if (w < s_w)
		printf("��ü�� �Դϴ�");
	else if (w > s_w)
		printf("��ü�� �Դϴ�");
	else
		printf("ǥ��ü�� �Դϴ�");
	return 0;
}