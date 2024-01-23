#include <stdio.h>
#include <stdlib.h>

int main(){
    /*algoritmo que imprime uma contagem regressiva de 10 até 0 
    usando while, do while e for*/

    int cont = 10;

    while(cont >= 0){
        printf("%d\n", cont);
        cont--;
    }

    cont = 10;
    do{
        printf("%d\n", cont);
        cont--;
    }while(cont >= 0);

    for(cont = 10; cont >= 0; cont--){
        printf("%d\n", cont);
    }

    return 0;
}