# include <stdio.h>
# pragma warning (disable:4996)

int research_array(int* arr, int size, int key, int* idx) {

	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			idx[cnt++] = i;
		}
	}
	return cnt;
}

int main(void) {

	int arr[10] = { 12,45,62,12,99,83,23,12,72,37 };
	int key;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\nã�� ��? ");
	scanf("%d", &key);

	int idx[10];

	int res = research_array(arr, 10, key, idx);
	printf("ã�� �׸��� ��� %d���Դϴ�\n", res);
	printf("ã�� �׸��� �ε���: ");
	for (int i = 0; i < res; i++)
		printf("%d ", idx[i]);

}