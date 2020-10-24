#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, r, result, i;

	printf("n의 값:  ");
	scanf("%d", &n);
	
	printf("r의 값:  ");
	scanf("%d", &r);
	
	result = 1;

	for (i = n; i >= (n - r - 1); i--)
		result = result * i;
	printf("순열의 값은 %d입니다.\n", result);

	return 0;
}
