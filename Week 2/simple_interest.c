#include <stdio.h>

// 6. Calculate Simple Interest

int main(){    
    int year, rate;
    double capital, SI;

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter capital: ");
    scanf("%lf", &capital);

    SI = capital * rate * year / 100;
    
    printf("SI = %lf", SI);
    return 0;
}