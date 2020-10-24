#include <stdio.h>

int main(void)
{
	int i, sum;
	i = 0;
	sum = 0;
	while (1)
	{
		i++;
		sum += i;
		if (sum >= 10000)
			break;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", (i - 1), sum - i);
	return 0;
}
