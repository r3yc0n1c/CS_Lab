#include <stdio.h>

// Calculate area and circumference of circle

int main(){
    float PI = 22.0/7.0, r = 10.5;
    float area, cir;

    area = PI * r * r;
    cir = 2 * PI * r;
    
    printf("Area          = %f\n", area);
    printf("Circumference = %f\n", cir);
    
    return 0;
}