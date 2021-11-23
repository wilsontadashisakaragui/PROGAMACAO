
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi feito
	printf("QUANTO PRECISO NA P2 PARA SER APROVADO \n");
	// declara as variaveis
	float p1, p2;
	// pede a nota da p1
	printf("Digite a nota da p1: ");
	scanf("%f", &p1);
	// faz o calculo da p2
	p2= (15 - p1) / 2;
	// mostra nota a ser tirada
	printf("A nota que voce precisa e %.2f \n", p2 );
	// fim
	return 0;
}

