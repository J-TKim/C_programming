# include <stdio.h>

void sort_array(int* arr, int size) {

	int index_min, tmp;

	for (int i = 0; i < size - 1; i++) {
		index_min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[index_min] > arr[j])
				index_min = j;
		}
		if (i != index_min) {
			tmp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = tmp;
		}
	}

}

int main(void) {

	int data[] = { 92,34,76,32,15,28,41,55,89,62 };
	int size = sizeof(data) / sizeof(data[0]);
	int* p = data;

	printf("정렬 전: ");
	for (int i = 0.; i < size; i++)
		printf("%d ", data[i]);

	sort_array(p, size);

	printf("\n정렬 후: ");
	for (int i = 0.; i < size; i++)
		printf("%d ", data[i]);
}