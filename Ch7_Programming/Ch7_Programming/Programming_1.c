#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int c, i;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf("%d", &c);
	for (i = c; i >= 1; i--) {
		printf("%d ", i);
	}
	printf("\n\a");

	return 0;
}
