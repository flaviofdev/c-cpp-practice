#include <stdio.h>
#include <stdlib.h>

int main(){
    //algoritmo que l� 2 notas e mostra o valor absoluto da diferen�a

    float nota1, nota2, diferenca, valorAbsoluto;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    diferenca = nota1 - nota2;
    valorAbsoluto = abs(diferenca);

    printf("O valor absoluto da diferenca entre as notas %.2f e %.2f e: %.2f\n", nota1, nota2, valorAbsoluto);

    return 0;
}
