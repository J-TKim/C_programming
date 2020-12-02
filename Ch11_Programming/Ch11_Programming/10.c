#include <stdio.h>
#pragma warning(disable:4996)

void merge(int A, int B, int* p_lcm, int* p_gcd) {
	int i;

	for (i = A;; i--) {
		if (A % i == 0 && B % i == 0) {
			*p_gcd = i;
			break;
		}
	}

	for (i = A;; i++) {
		if (i % A == 0 && i % B == 0) {
			*p_lcm = i;
			break;
		}
	}
}

int main(void) {
	int x, y, lcm, gcd;
	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	merge(x, y, &lcm, &gcd);

	printf("�ּҰ������ %d�Դϴ�.", lcm);
	printf("�ִ������� %d�Դϴ�.", gcd);
	return 0;
}