
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// diz a que o programa foi feito
	printf("TABUADA DE UM NUMERO QUALQUER \n");
	// declaração de variaveis
	int numero, r, i;
	// pede um numero para a tabuada
	printf("Digite um numero; ");
	scanf("%i", &numero);
	// impede que o numero seja negativo
	while (numero <=0){
		
		printf("Digite outro numero, somente numeros positivos: \n");
		scanf("%i", &numero);}
		// começa a tabuada
		i = 0;
		while (i <= 10){
			r = numero * i;
			
			printf("%i x %i = %i \n", numero, i, r);
			
			i = i +1;
		}
		// fim
		return 0;
}
