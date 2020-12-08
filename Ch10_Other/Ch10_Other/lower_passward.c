# include <stdio.h>
# include <string.h>
# include <ctype.h>
# pragma warning (disable:4996)

struct login_info {
	char id[20];
	char passwd[20];
};

void lower_login(struct login_info* p) {

	int len1 = strlen(p->id);
	int len2 = strlen(p->passwd);
	for (int i = 0; i < len1; i++)
		p->id[i] = p->id[i] + 32;
	for (int i = 0; i < len2; i++)
		p->passwd[i] = p->passwd[i] + 32;

}

void print_login(struct login_info* p) {

	int len = strlen(p->passwd);
	printf("ID: %s\n", p->id);
	printf("PW: ");
	for (int i = 0; i < len; i++)
		printf("*");

}

int main(void) {

	struct login_info log;
	struct login_info* p = &log;

	printf("ID? ");
	scanf("%s", log.id);
	printf("Password? ");
	scanf("%s", log.passwd);

	lower_login(p);
	print_login(p);

}