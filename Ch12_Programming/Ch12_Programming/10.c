#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word[30];
    int length;
    int isPalindrome = 1;

    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);

    length = strlen(word); 

    for (int i = 0; i < length / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[length - 1 - i]))
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("ȸ���Դϴ�.");
    }
    else {
        printf("ȸ���� �ƴմϴ�.");
    }

    return 0;
}