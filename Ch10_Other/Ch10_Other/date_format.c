# include <stdio.h>
# pragma warning (disable:4996)

struct date {
	int year;
	int month;
	int day;
};

int main(void) {

	struct date date1 = { 0 };
	printf("¿¬? ");
	scanf("%d", &date1.year);
	printf("¿ù? ");
	scanf("%d", &date1.month);
	printf("ÀÏ? ");
	scanf("%d", &date1.day);

	printf("%d/%d/%d", date1.year, date1.month, date1.day);
}