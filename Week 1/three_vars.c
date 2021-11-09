#include <stdio.h>

// Use (+,-,*,/) on 3 variables

int main(){
    int a = 190, b = 10, c = 5;
    int add, mult, sub, div;
    
    add = a+b+c;
    mult = a*b*c;
    sub = a-b-c;
    div = a/b/c;

    printf("%d + %d + %d = %d\n", a, b, c, add);
    printf("%d * %d * %d = %d\n", a, b, c, mult);
    printf("%d - %d - %d = %d\n", a, b, c, sub);
    printf("%d / %d / %d = %d\n", a, b, c, div);
    
    return 0;
}