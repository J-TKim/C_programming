# include <stdio.h>
# include <string.h>

int main(void) {

	char str[20];
	while (1) {
		printf("ID? ");
		gets(str);
		
		int isright = 0;

		for (int i = 0; i < strlen(str); i++) {
			if (!('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z' || 0 <= str[i] && str[i] <= 9)) {
				isright = 1;
				continue;
			}
		}

		if (strlen(str) < 8) {
			printf("ID�� 8�� �̻��̾���մϴ�.\n");
			continue;
		}
			
		else if (!('a' <= str[0] && str[0] <= 'z' || 'A' <= str[0] && str[0] <= 'Z')) {
			printf("ID�� �����ڷ� �����ؾ��մϴ�.\n");
			continue;
		}
		
		else if (isright = 1) {
			printf("ID�� �����ڿ� ���ڷθ� �����Ǿ�� �մϴ�.\n");
			continue;
		}

		else {
			printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", str);
			break;
		}
			
	}
	
}