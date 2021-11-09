#include <stdio.h>

// Check whether a number is +ve, -ve or zero using if else ladder

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0)
        printf("+ve\n");
    else if(n==0)
        printf("zero\n");
    else
        printf("-ve\n");
    return 0;
}