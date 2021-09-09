
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// informa para que o programa foi desenvolvido
	printf("TRANSFORMA DOLARES EM REAIS \n");
	// declara as variaveis
	float real, tx, dl;
	// pergunta quanto e a taxa do dolar
	printf("Qual a taxa do dolar: ");
	scanf("%f", &tx);
	// pergunta quantos dolares voce tem
	printf("Quantos dolares existe: \n");
	scanf("%f", &dl);
	// faz a transformação
	real = tx * dl;
	// exibe em reais a quantidade de dolare
	printf("Tem em reais %0.4f: \n", real);
	// fim
	return 0;
}
