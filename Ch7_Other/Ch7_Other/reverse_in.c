#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int Arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int find;

	printf("찾을 값? ");
	scanf("%d", &find);

	for (int i = 9; i >= 0; i--) {
		if (Arr[i] == find) {
			printf("%d는 %d번째 원소입니다.", find, i);
			break;
		}
	}

	return 0;
}
