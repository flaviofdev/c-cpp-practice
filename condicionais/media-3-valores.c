#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"pt_BR");

    /* algoritmo que le 3 notas e calcula a media, caso o 
    valor for maior que 7 informa que o aluno foi aprovado,
    se não, reprovado. */

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;

    if(media>=7){
        printf("O aluno foi aprovado com a seguinte média: %.2f\n", media);
    }else{
        printf("O aluno foi reprovado com a seguinte média: %.2f\n", media);
    }

    return 0;
}
