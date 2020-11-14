#include <stdio.h>
#pragma warning(disable:4996)

int get_random() {
	static int inited = 0;
	if (inited == 0) {
		printf("초기화 실행\n");
		inited = 1;
	}
	return rand();
}

int main(void) {
	
	int n;
	n = get_random();
	printf("%d\n", n);

	n = get_random();
	printf("%d\n", n);

	n = get_random();
	printf("%d\n", n);
	
	return 0;
}