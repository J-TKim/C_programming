#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x;
	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &x);

	printf("8�����δ� %#o�Դϴ�.\n", x);
	printf("16�����δ� %#d�Դϴ�.\n", x);
	printf("16�����δ� %#x�Դϴ�.\n", x);
	
	return 0;
}