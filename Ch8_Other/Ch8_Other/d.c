# include <stdio.h>
# pragma warning (disable:4996)

int seq(int* arr, int size, int d) {

	for (int i = 0; i < size; i++) {
		arr[i] = arr[0] + d * i;
	}
}

int main(void) {

	int arr[10];
	int a, d;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("첫 번째 항? ");
	scanf("%d", &a);
	
	printf("공차? ");
	scanf("%d", &d);

	arr[0] = a;
	
	printf("등차수열: ");
	seq(arr, size, d);

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

}