#include <stdio.h>
#pragma warning(disable:4996)

void print_value(int n) {
	int i = 0;

	while (i < n) {
		printf("*");
		i++;
	}
	printf("\n");
}

int main(void) {
	int n;
	
	while (1) {
		printf("값을 입력하시오(종료는 음수): ");
		scanf("%d", &n);

		if (n < 0)
			break;

		print_value(n);
	}
}