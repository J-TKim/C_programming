#include <stdio.h>
#pragma warning(disable:4996)

int even(int n) {
	int ret;

	if (n % 2 == 0)
		ret = 1;
	else
		ret = 0;

	return ret; 
}

int absolute(int n) {
	int ret = n;

	if (n <= 0)
		ret = -n;
	
	return ret;
}

int sign(int n) {
	int ret;

	if (n < 0)
		ret = -1;

	else if (n > 0)
		ret = 1;

	else if (n = 0)
		ret = 0;

	return ret;
}

int main(void) {
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("even()�� ���: ");

	if (even(n) == 1)
		printf("¦��\n");

	else
		printf("Ȧ��\n");

	printf("absolute()�� ���: %d\n", absolute(n));
	
	printf("sign()�� ���: ");
	if (sign(n) == 1)
		printf("���\n");

	else if (sign(n) == 0)
		printf("0\n");

	else if (sign(n) == -1)
		printf("-1\n");

	return 0;
}