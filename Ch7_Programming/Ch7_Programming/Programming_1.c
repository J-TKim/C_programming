#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int c, i;

	printf("카운터의 초기값을 입력하시오: ");
	scanf("%d", &c);
	for (i = c; i >= 1; i--) {
		printf("%d ", i);
	}
	printf("\n\a");

	return 0;
}
