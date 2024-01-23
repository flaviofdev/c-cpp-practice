#include <stdio.h>
#include <stdlib.h>

int main(){
    // algoritmo que le valores para um vetor e calcula a media 
    int tamanho, cont; // cont = variável contadora
    
    printf("Qual sera o tamanho do vetor? \n");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;

    for(cont = 0; cont < tamanho; cont++){
        printf("Digite um valor para o vetor: ");
        scanf("%f", &vetor[cont]);
        soma = soma + vetor[cont];
    }
    
    for(cont = 0; cont < tamanho; cont++){
        printf("\nvetor[%d] = %.2f", cont, vetor[cont]);
    }
     
    printf("\nA media dos valores e = %.2f", soma/tamanho);

    return 0;
}