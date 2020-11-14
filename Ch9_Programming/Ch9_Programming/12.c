#include <stdio.h>
#pragma warning(disable:4996)

int fib(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	while (n != 1) {
		return fib(n - 2) + fib(n - 1);
	}
}

int main(void) {
	int until = 9;
	for (int i = 0; i <= until; i++) {
		printf("fib(%d) = %d\n", i, fib(i));
	}

}