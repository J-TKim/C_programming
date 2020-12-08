# include <stdio.h>
# pragma warning (disable:4996)

struct product {
	char name[20];
	int price;
	int inv;
};

void print_product(struct product* p) {
	printf("[%s %d원 재고:%d]", p->name, p->price, p->inv);
}

int main(void) {

	struct product product1;
	struct product* p = &product1;

	printf("제품명? ");
	scanf("%s", product1.name);
	printf("가격? ");
	scanf("%d", &product1.price);
	printf("재고? ");
	scanf("%d", &product1.inv);

	print_product(p);
}