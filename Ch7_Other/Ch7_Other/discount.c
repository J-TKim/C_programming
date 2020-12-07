#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 5

int dis_arr(int Arr1[], int size, int dis, int Arr2[]) {
    for (int i = 0; i < size; i++) {
        Arr2[i] = Arr1[i] * dis / 100;
        printf("가격:\t%d --> 할인가:\t%d\n", Arr1[i], Arr2[i]);
    }

    return Arr2;
}


int main(void) {
    int Arr1[SIZE], Arr2[SIZE];
    int dis;

    printf("상품가 5개를 입력하시오: ");
    scanf("%d %d %d %d %d", &Arr1[0], &Arr1[1], &Arr1[2], &Arr1[3], &Arr1[4]);

    printf("할인율(%%)? ");
    scanf("%d", &dis);
    printf("\n");

    dis_arr(Arr1, SIZE, dis, Arr2);

    printf("\n");

    return 0;
}