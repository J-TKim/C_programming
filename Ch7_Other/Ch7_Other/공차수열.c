#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int Arr[10];
	int a, d;

	printf("ù ��° ��? ");
	scanf("%d", &a);

	printf("����? ");
	scanf("%d", &d);

	Arr[0] = a;
	for (int i = 1; i < 10; i++) {
		a = a + d;
		Arr[i] = a;
	}
	
	printf("��������: ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", Arr[i]);
	}

	return 0;
}
