#include <stdio.h>
#include <stdlib.h>

int returnTen();
float returnFloat();

int main(){

    int a;
    a = returnTen();
    printf("%d\n", a);

    float b;
    b = returnFloat();
    printf("%f\n", b);

    return 0;
}
//function that returns 10
int returnTen(){
    printf("Value =  ");
    return 10;
}

float returnFloat(){
    printf("Value =  ");
    return 5.5;
}