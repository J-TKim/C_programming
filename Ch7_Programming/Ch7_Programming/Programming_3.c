#include <stdio.h>
#include <math.h>

int main(void)
{
	int x;


	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("약수: ");
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)
			printf("%d ", i);
	}
	printf("\n");
	
	return 0;
}
