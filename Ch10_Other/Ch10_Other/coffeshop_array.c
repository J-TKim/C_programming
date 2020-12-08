# include <stdio.h>
# pragma warning (disable:4996)

struct product {
	char name[20];
	int price;
	int inv;
};

void print_product(struct product product[], int k) {

	for (int i = 0; i < k; i++)
		printf("[%s %d원 재고:%d]\n", product[i].name, product[i].price, product[i].inv);
}

int main(void) {

	struct product product1[5];

	int i = 0;
	while (i < 5) {

		printf("제품명? ");
		scanf("%s", product1[i].name);

		if (product1[i].name[0] == '.')
			break;

		printf("가격 재고? ");
		scanf("%d %d", &product1[i].price, &product1[i].inv);

		i++;
	}

	print_product(product1, i);
}