#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int input, count;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &input);

	printf("2�� ���ϰ� ���� Ƚ��:");
	scanf("%d", &count);

	printf("%d<<%d�� ��: %d", input, count, input << count);

	return 0;
}
