#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int input;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &input);

	printf("���� �ڸ�: %d\n", (input / 10));
	printf("���� �ڸ�: %d\n", (input % 10));

	return 0;
}
