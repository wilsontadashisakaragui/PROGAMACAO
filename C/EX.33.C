
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { // int numeros[10] 
	// declarando o vetor com 10 posições
	int numeros[10];
	// looping para popular o vetor
	printf("Digite os 10 numeros:\n");
	for(int i=0; i<10; i++){
		scanf("%i", &numeros[i]);
	}
	// looping para exibir os valores do vetor
	printf("Os numeros digitados foram:\n");
	for(int i=9; i >=0; i--){
	
		printf("%i \n", numeros[i]);
	}
	
	return 0;
}
