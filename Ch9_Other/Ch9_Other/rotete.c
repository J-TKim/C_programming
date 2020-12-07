#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main(void) {

	char s[80];
	int j, idx;
	int count = 0;
	int plus;

	int turn;

	printf("문자: ");
	gets_s(s, 80);

	while (1) {
		printf("숫자:");
		scanf("%d", &plus);

		if (plus == 0) break;

		else if (plus < 0) plus = strlen(s) + plus;

		count += plus;

		turn = strlen(s) - count;

		for (j = 0; j < strlen(s); j++) {
			idx = turn + j;
			if (idx >= strlen(s)) {
				idx -= strlen(s);
				}
			printf("%c", s[idx]);
			}
			printf("\n");
		}
	printf("\n ");
	return 0;
}