# include <stdio.h>
# pragma warning (disable:4996)


void square(int* n1, int* n2) {
	int a1 = *n1;
	int a2 = *n2;

	int area = a1 + a2;
	int cul = 2 * (a1 + a2);
	printf("넓이: %d, 둘레: %d", area, cul);
}

int main(void) {

	int a, b;
	printf("가로? ");
	scanf("%d", &a);
	printf("세로? ");
	scanf("%d", &b);

	square(&a, &b);
}