#include <stdio.h>
#include <math.h>

// 7. Calculate Compound Interest

int main(){    
    int year, rate;
    double capital, CI;

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter capital: ");
    scanf("%lf", &capital);

    CI = capital * ( pow((1 + (float)rate/100), year) - 1 );
    
    printf("CI = %lf", CI);
    return 0;
}