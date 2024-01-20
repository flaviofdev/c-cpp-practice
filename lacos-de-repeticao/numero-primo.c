#include <stdio.h>
#include <stdlib.h>

int main(){
    //algoritmo que informa se o valor lido é ou não número primo.
    int i, valor, aux = 0;
    printf("Digite um valor inteiro para saber se e primo: \n");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        //verificando quantas vezes houve divisibilidade
        if(valor % i == 0){
            aux++;
        }
    }
    if(aux == 2){
        printf("O numero %d e primo pois tem %d divisores.", valor, aux);
    }else{
        printf("O numero %d nao e primo porque tem %d divisores.", valor, aux);
    }

    return 0;
}