
#include <stdio.h>
#include <time.h>

int main()
{
    int board[10][10] = { 0 };
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if ((rand() % 100) < 30)
                board[i][j] = 1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            if (board[i][j])
                printf("# ");
            else
                printf(". ");
        printf("\n");
    }
    return 0;
}
