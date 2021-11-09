#include <stdio.h>

// 4. Convert Temp from C to F

int main(){
    float C, F;
    
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &C);
    
    F = C*9/5 + 32;
    
    printf("Temperature in Fahrenheit = %f", F);
    return 0;
}
