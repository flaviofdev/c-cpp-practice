#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);


    media = (nota1 + nota2) / 2;
    printf("A media das notas %.2f e %.2f e = %.2f\n", nota1, nota2, media);

    return 0;
}
