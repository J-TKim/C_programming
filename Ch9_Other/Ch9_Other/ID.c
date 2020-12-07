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
			printf("ID는 8자 이상이어야합니다.\n");
			continue;
		}
			
		else if (!('a' <= str[0] && str[0] <= 'z' || 'A' <= str[0] && str[0] <= 'Z')) {
			printf("ID는 영문자로 시작해야합니다.\n");
			continue;
		}
		
		else if (isright = 1) {
			printf("ID는 영문자와 숫자로만 구성되어야 합니다.\n");
			continue;
		}

		else {
			printf("%s는 ID로 사용할 수 있습니다.\n", str);
			break;
		}
			
	}
	
}