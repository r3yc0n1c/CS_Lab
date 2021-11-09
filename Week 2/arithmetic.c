#include <stdio.h>

// 1. WAP to enter two numbers and perform arithmetic operations(+,-,*,/ and %)

int main(){

    int x, y;

    printf("Enter 2 values: ");
    scanf("%d %d", &x, &y);

    printf("%d + %d\t = \t%d\n", x, y, x+y);
    printf("%d - %d\t = \t%d\n", x, y, x-y);
    printf("%d * %d\t = \t%d\n", x, y, x*y);
    printf("%d / %d\t = \t%d\n", x, y, x/y);
    printf("%d %% %d\t = \t%d\n", x, y, x%y);
    return 0;
}