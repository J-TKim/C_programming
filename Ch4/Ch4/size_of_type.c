#include <stdio.h>

int main(void) {
	int x;
	printf("변수 x의 크기: %d\n", sizeof(x));
	printf("char의 크기: %d\n", sizeof(char));
	printf("int형의 크기: %d\n", sizeof(int));
	printf("short의 크기: %d\n", sizeof(short));
	printf("변수 long의 크기: %d\n", sizeof(long));
	printf("변수 long long의 크기: %d\n", sizeof(long long));
	printf("변수 float의 크기: %d\n", sizeof(float));
	printf("변수 double의 크기: %d\n", sizeof(double));

	return 0;
}