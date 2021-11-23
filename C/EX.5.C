#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// declara variaveis
	float C, F;
	// imprime a utilidade do programa
	printf("Tranforma a temperatura de Celsius para Fahrenheit \n");
	// pede a temperatura em celsius
	printf("Digite o valor da temperatura em Celsius: ");
	scanf("%f", &C);
	// faz o calculo
	F = (C * 1.8  + 32);
	printf("A temperatura em graus Fahrenheit e: %.3f", F);
	// fim
	return 0;
}
