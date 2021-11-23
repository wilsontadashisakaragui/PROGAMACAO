#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv){
	// declarando o vetor com 10 posições
	int numeros[9], maior;
	// looping para popular o vetor
	for(int i = 0; i < 10; i++){
 		printf("Digite %i numero: ", i+1);
 		scanf("%i", &numeros[i]);
 	}
 	 // verificar o maior valor do vetor
 	maior = numeros[0];
 	for(int i = 0; i < 10; i++){
 		if (maior < numeros[i])
 			maior = numeros[i];
 	}
	// exibir o maior valor do vetor
	printf("\nO maior numero digitado foi: %i", maior);
	// fim
	return 0;

	
	return 0;
}
