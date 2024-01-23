#include <stdio.h>
#include <stdlib.h>

int main(){

    /* Algoritmo que le dois valores e efetua as operacoes de
    soma, subtracao, divisao e multiplicao exibindo o resultado com os valores lidos utilizando o switch case.*/

    float valor1, valor2, resultado;
    int opcao;

	// verifica e valida se uma das 4 opcoes foram escolhidas, caso nao, o menu é reiniciado.
	while(opcao < 1 || opcao > 4){
		printf("\n-----------------------------------------------------------------\n\n");
		printf("Digite o numero para o tipo de calculo que deseja fazer:\n");
		printf("1 - Soma    2 - Subtracao   3 - Divisao     4 - Multiplicacao\n");
		printf("\n-----------------------------------------------------------------\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Digite o primeiro valor para efetuar a soma: \n");
				scanf("%f", &valor1);
				printf("Digite o segundo valor para efetuar a soma: \n");
				scanf("%f", &valor2);
				resultado = valor1 + valor2;
				printf("O resultado da soma entre %.f e %.f e = %.f.\n", valor1, valor2, resultado);
				break;
			case 2:
				printf("Digite o primeiro valor para efetuar a subtracao: \n");
				scanf("%f", &valor1);
				printf("Digite o segundo valor para efetuar a subtracao: \n");
				scanf("%f", &valor2);
				resultado = valor1 - valor2;
				printf("O resultado da subtracao entre %.f e %.f e = %.f.\n", valor1, valor2, resultado);
				break;
			case 3:
				printf("Digite o dividendo: \n");
				scanf("%f", &valor1);
				printf("Digite o divisor: \n");
				scanf("%f", &valor2);
				resultado = valor1 / valor2;
				printf("O resultado da divisao entre %.f e %.f e = %.f.\n", valor1, valor2, resultado);
				break;
			case 4:
				printf("Digite o primeiro valor para efetuar a multiplicacao: \n");
				scanf("%f", &valor1);
				printf("Digite o segundo valor para efetuar a multiplicacao: \n");
				scanf("%f", &valor2);
				resultado = valor1 * valor2;
				printf("O resultado da multiplicacao entre %.f e %.f e = %.f.\n", valor1, valor2, resultado);
				break;
			default:
				printf("Opcao invalida.\n");
				break;
		}
	}
	
    return 0;

    }
