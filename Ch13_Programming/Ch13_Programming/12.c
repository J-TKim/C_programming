#include <stdio.h>

#include <stdlib.h>

#define SIZE 52



typedef struct {

	int value;

	char suit;

} Card;



void init_card(Card pack[], char shape[]);

void print_card(Card pack[], int size);

void shuf_card(Card pack[], int size);



void main() {

	Card pack[SIZE];

	char shape[] = { 'c', 'd', 'h', 's' };



	init_card(pack, shape);

	printf("카드가 초기화 되었습니다.\n");

	print_card(pack, SIZE);

	printf("\n");

}



void init_card(Card pack[], char shape[]) {

	int i, j, count = 0;



	for (i = 0; i < 4; i++) {

		for (j = 0; j < 13; j++) {

			pack[count].value = j + 1;

			pack[count].suit = shape[i];

			count++;

		}

	}

}



void print_card(Card pack[], int size) {

	int i, j;

	for (i = 0; i < size; i++) {

		printf("%3d%c", pack[i].value, pack[i].suit);

		if ((i + 1) % 13 == 0)

			printf("\n");

	}

}