#include <iostream>

#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//declara as variaveis do programa
	int b, h, area;
	// mostra a utilidade do programa
	printf("CALCULO DA AREA DE UM RETANGULO \n");
	// pede a entrada de base do retangulo
	printf("Digite a base do retangulo: ");
	scanf("%i", &b);
	// pede a entrada da altura do retangulo
	printf ("Digite a altura do retangulo: ");
	scanf("%i", &h);
	// executa o calculo da area
	area = b * h;
	// mostra o resultado do calculo
	printf("A area do retangulo e igual a %i", area);
	//fim
	return 0;}



