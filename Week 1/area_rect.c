#include <stdio.h>

// Calculate area and perimeter of rectangle

int main(){
    int l = 60, b = 20;
    int area, peri;

    area = l * b;
    peri = 2 * (l + b);
    
    printf("Area      = %d\n", area);
    printf("Perimeter = %d\n", peri);
    
    return 0;
}