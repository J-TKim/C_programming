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
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	merge(x, y, &lcm, &gcd);

	printf("최소공배수는 %d입니다.", lcm);
	printf("최대공약수는 %d입니다.", gcd);
	return 0;
}