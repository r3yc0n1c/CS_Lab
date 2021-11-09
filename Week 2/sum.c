#include <stdio.h>

int main(){
    // Perform sum of 2 numbers

    int num1, num2, sum;
    
    printf("Enter 2 values: ");
    scanf("%d%d", &num1, &num2);
    
    sum = num1 + num2;

    printf("Sum = %d", sum);
    return 0;
}
