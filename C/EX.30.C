
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi desenvolvido
	printf("EXIBA OS TRINTA VALORES DA SERIE DE FIBONACCI \n");// nosso caso 30 mas pode ser qualquer valor
	// delcara as variaveis
	int i, n, ter1 = 0, ter2 = 1, prox;
	// pede o numero de termos
	printf("QUAL A QUANTIDADE DE TERMOS?: ");
	scanf("%i", &n);
	// calculo da sequencia
	for(i = 1; i <= n; i++){
		
		printf("%i.", ter1);
		prox = ter1 + ter2;
		ter1 = ter2;
		ter2 = prox;
	}
	
	return 0;
}
