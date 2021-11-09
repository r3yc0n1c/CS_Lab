#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    
    if (a>10){
        printf("Great... Condition is true\n");
        printf("You have entered number greater than 10\n");        
    }
    else{
        printf("Alas... Condition is false\n");
        printf("You have entered number not greater than 10\n");        
    }
    return 0;
}