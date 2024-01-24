#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a = 20;

    printf("'a' value: %d \n", a);
    printf("'a' adress: %d \n", &a);

    int b = 10;
    int *pointer;
   
    pointer = &b;
    printf("'b' value: %d \n", b);
    
    *pointer = 40;
    printf("'b' value: %d \n", b);

    return 0;
}