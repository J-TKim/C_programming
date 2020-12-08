# include <stdio.h>
# pragma warning (disable:4996)

struct login_info {
	char id[20];
	char passwd[20];
};

int main(void) {

	struct login_info log;

	printf("ID? ");
	scanf("%s", log.id);
	printf("Password? ");
	scanf("%s", log.passwd);

	int passlen = strlen(log.passwd);
	printf("ID: %s\n", log.id);
	printf("PW: ");
	for (int i = 0; i < passlen; i++)
		printf("*");
}