#include <stdio.h>
#include <stdlib.h>

int main(){

    //algoritmo que l� 3 n�meros em uma s� linha e os multiplica exibindo o resultado em seguida.
    int num1, num2, num3, multiplicacao;

    printf("Insira 3 numeros inteiros entre espacos: ");
    scanf("%d %d %d", &num1,&num2,&num3);

    multiplicacao = num1 * num2 * num3;
    printf("A multiplicacao de %d, %d e %d e = %d",num1, num2, num3, multiplicacao);

    return 0;
}
