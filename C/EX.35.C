#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// declarando o vetor com 20 posições
	int numeros[19], numeros2[19], mult;
	// looping para popular o vetor
	for(int i = 0; i < 20; i++){
 		printf("Digite %i numero: ", i+1);
 		scanf("%i", &numeros[i]);
  	}
  	// pede numero para multiplicar
  	printf("\nMultiplicar os numeros do vetor por: ");
  	scanf("%i", &mult);
  	// looping para multiplicar os e armazenar os valores do novo vetor
  	for(int i = 0; i < 20; i++)
 		numeros2[i] = numeros[i] * mult;
  	// looping para exibir os novos valores do vetor
	printf("\nOs numeros do novo vetor sao:\n");
	for(int i = 0; i < 20; i++)
		printf("%i. ", numeros2[i]);
	// fim

	return 0;
}
