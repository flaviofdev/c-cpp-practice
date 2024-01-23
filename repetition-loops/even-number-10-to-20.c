#include <stdio.h>
#include <stdlib.h>

int main(){
    /* algoritmo que imprima os números pares
    de 10 a 20 usando while, do while e for.*/

    int i = 10;
    while(i <= 20){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }

    i = 10;
    do{
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }while(i <= 20);

    for(i = 10; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}