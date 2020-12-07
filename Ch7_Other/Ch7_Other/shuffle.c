# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10] = { 12,43,39,98,71,63,8,16,54,85 };
	int n, r;

	printf("¼ÅÇÃ Àü: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	// random shuffle
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		n = rand() % (10 - i) + i;
		r = arr[i];
		arr[i] = arr[n];
		arr[n] = r;

	}

	printf("¼ÅÇÃ ÈÄ: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

}