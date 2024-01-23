#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    // Algoritmo que lê 3 valores e informa se que
    // tipo de triângulo formam.

    int valor1, valor2, valor3;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &valor3);

    if((valor1 == valor2) && (valor2 == valor3)){
        printf("Os valores informados são iguais e formam um triângulo equilátero.\n");
    }else if( (valor1 == valor2) || (valor2 == valor3) || (valor3 == valor1) ){
        printf("Apenas dois lados são iguais e formam um triângulo isóceles.\n");
    }else{
        printf("Nenhum dos lados são iguais e forma um triângulo escaleno.\n");
    }

    system("pause");
}
