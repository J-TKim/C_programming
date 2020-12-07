// 7장 연습문제10

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	char arr[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int seat = 10;
	int tic;
	int p = 0;

	while (1) {

		printf("현재 좌석: [ ");
		for (int i = 0; i < 10; i++) {
			printf("%c ", arr[i]);
		}
		printf("]");

		printf("\n예매할 좌석수? ");
		scanf("%d", &tic);

		if (seat >= tic) {
			for (int i = 0; i < tic; i++) {
				printf("%d ", i + p + 1);
			}
			printf("번 좌석을 예매했습니다.\n");
			seat -= tic;
			for (int i = p; i < p + tic; i++) {
				arr[i] = 'X';
			}
			p += tic;

		}

		else {
			printf("남은 좌석수가 %d이므로 %d좌석을 예매할 수 없습니다.\n", seat, tic);
			break;
		}

	}

}