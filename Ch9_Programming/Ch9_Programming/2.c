#include <stdio.h>
#pragma warning(disable:4996)

int get_dice_face() {
	return rand() % 6;
}

int main(void) {
	int count[6] = { 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < 100; i++) {
		count[get_dice_face()] += 1;
	}

	for (int i = 1; i <= 6; i++) {
		printf("%d->%d\n", i, count[i - 1]);
	}

	return 0;
}