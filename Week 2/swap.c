#include <stdio.h>

// 5. Swap two numbers

int main(){
    int a, b, c;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("Before swap...\na = %d, b = %d\n", a, b);

    c = b;
    b = a;
    a = c;
    
    printf("After swap...\na = %d, b = %d\n", a, b);
    return 0;
}