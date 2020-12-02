#include <stdio.h>

struct account {
	int number;
	char  name[20];
	int balance;
};

int main(void)
{
	struct account account1 = { 1, "ȫ�浿", 100000 };
	printf("{ %d, %s, %d } \n", account1.number, account1.name, account1.balance);
	return 0;
}
