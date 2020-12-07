# include <stdio.h>
#include <string.h>
# include <ctype.h>

int strcmp_ic(char* lhs, char* rhs) {
    int len;
    if (strlen(lhs) > strlen(rhs)) len = strlen(lhs);
    else len = strlen(rhs);

    for (int i = 0; i < len; i++) {

        if (tolower(lhs[i]) == tolower(rhs[i]))
            continue;
        else if (tolower(lhs[i]) < tolower(rhs[i])) return -1;
        else if (tolower(lhs[i]) > tolower(rhs[i])) return 1;
    }

    return 0;

}

int main(void) {

    char str1[20], str2[20];
    printf("첫 번째 문자열? ");
    gets(str1);
    printf("두 번째 문자열? ");
    gets(str2);

    int res = strcmp_ic(str1, str2);
    if (res == 0)
        printf("%s == %s", str1, str2);
    else if (res == -1)
        printf("%s < %s", str1, str2);
    else if (res == 1)
        printf("%s > %s", str1, str2);
}