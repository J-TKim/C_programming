#include <stdio.h>
#pragma warning(disable:4996)

double power(double base, int power_raised) {
    if (power_raised == 0) return 1;
    else if ((power_raised % 2) == 0)
        return power(base * base, power_raised / 2);
    else return base * power(base * base, (power_raised - 1) / 2);
}

int main(void) {
    
    int base;
    int power_raised;

    printf("¹Ø¼ö: ");
    scanf("%d", &base);

    printf("Áö¼ö: ");
    scanf("%d", &power_raised);

    int result;

    result = power(base, power_raised);
    printf("%d^%d =  %d\n", base, power_raised, result);

    return 0;
}