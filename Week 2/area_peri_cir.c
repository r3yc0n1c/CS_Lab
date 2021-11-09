#include <stdio.h>
#include <math.h>

// 2. WAP to enter length and breadth of a rectangle and 
// radius of a circle. Find area and perimeter of both.

int main(){
    float l, b, r, peri, rect_area, cir, cir_area;
    
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);
    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    peri = 2 * (l + b);
    rect_area = l * b;
    cir = 2 * M_PI * r;
    cir_area = M_PI * r * r;
    
    printf("Perimeter of the rectangle  = %f\n", peri);
    printf("Area of Rectangle           = %f\n", rect_area);
    printf("Circumference of the circle = %f\n", cir);
    printf("Area of the circle          = %f\n", cir_area);
    return 0;
}