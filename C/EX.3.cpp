#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o prgorama foi feito
	printf("CALCULAR A AREA DE UM TRIANGULO \n");
	// declaraas variaveis
	float b, area, h;
	// pede a base do triangulo
	printf("Digite a base de triangulo ");
	scanf("%f", &b);
	// pede a altura do triangulo
	printf("Digite a altura do triangulo ");
	scanf("%f", &h);
	// callcula a area do triangulo
	area = ((b * h) / 2);
	// mostra a area do triangulo
	printf("A area de triangulo eh: %f", area);
	// fim
	return 0;

}
