#include <stdio.h>
#include <stdlib.h>

int returnPlusTen(int num){
    return num + 10;
}

void plusTen(int *num){
    *num = *num + 10;
}

int main(){

    int a = 5;
    printf("%d \n", a);

    a = returnPlusTen(a);
    printf("%d \n", a);

    plusTen(&a);
    printf("%d \n", a);

    return 0;
}