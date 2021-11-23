#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// indica a que o programa serve
	printf("CALCULO DE UM TERRENO RETANGULAR \n");
	// declaraçao de variaveis
	float b, h, area;
	// pede a base do retangulo
	printf("Digite a base do retangulo ");
	scanf("%f", &b);
	// pede a altura do retangulo
	printf("Digite a altura do retangulo ");
	scanf("%f", &h);
	// faz o calculo da area
	area = b * h;
	// faz a comparaçao
	if (area >= 100)
	printf("Terreno grande  ");
	//fim
	return 0;
}
