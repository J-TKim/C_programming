# include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int x[10] = { 12,54,23,43,87,31,67,92,79,7 };
	int* p = x;

	for (int i = 0; i < 10; i++)
		printf("%d ", p[i]);
	
	int n;
	printf("\nÁ¤¼ö? ");
	scanf("%d", &n);

	for (int i = 0; i < 10; i++) {
		*p += n;
		printf("%d ", x[i]);
		*p++;
	}
}