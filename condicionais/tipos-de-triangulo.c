#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    // Algoritmo que l� 3 valores e informa se que
    // tipo de tri�ngulo formam.

    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3);

    if((valor1 == valor2) && (valor2 == valor3)){
        printf("Os valores informados s�o iguais e formam um tri�ngulo equil�tero.\n");
    }else if( (valor1 == valor2) || (valor2 == valor3) || (valor3 == valor1) ){
        printf("Apenas dois lados s�o iguais e formam um tri�ngulo is�celes.\n");
    }else{
        printf("Nenhum dos lados s�o iguais e forma um tri�ngulo escaleno.\n");
    }

    system("pause");
}
