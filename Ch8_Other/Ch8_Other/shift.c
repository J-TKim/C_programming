# include <stdio.h>
# pragma warning (disable:4996)

int swap_array(int* a, int* b) {
	int temp;
	for (int i = 0; i < 5; i++) {
		temp = *a;
		*a = *b;
		*b = temp;
		*a = *(a++);
		*b = *(b++);
	}
}

void print_arr(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(void) {

	int aa[5] = { 1,3,5,7,9 };
	int bb[5] = { 0,2,4,6,8 };

	printf("a 배열­: ");
	print_arr(aa, 5);
	printf("b 배열­: ");
	print_arr(bb, 5);

	swap_array(&aa, &bb);
	printf("<< swap_array 호출 후 >>\n");

	printf("a 배열­: ");
	print_arr(aa, 5);
	printf("b 배열­: ");
	print_arr(bb, 5);

}