#include <stdio.h>

// 3. Calculate gross salary

int main(){

    int basic;
    float DA, rent, gross;

    printf("Enter basic salary: ");
    scanf("%d", &basic);

    DA = 0.74 * basic;
    rent = 0.15 * basic;
    gross = basic + DA + rent;

    printf("Gross salary = %f", gross);
    return 0;
}