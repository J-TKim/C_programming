#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int Arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int find;

	printf("ã�� ��? ");
	scanf("%d", &find);

	for (int i = 9; i >= 0; i--) {
		if (Arr[i] == find) {
			printf("%d�� %d��° �����Դϴ�.", find, i);
			break;
		}
	}

	return 0;
}
