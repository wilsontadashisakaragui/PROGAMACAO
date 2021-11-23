
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	printf("VERIFICA SE UM TRIANGULO E RETANGULO \n");
	//declara as variaveis
	int a, b, c;
	
	// pede o primeiro valor
	printf("Digite o primeiro valor ");
	scanf("%i", &a);
	// pede o segundo valor
	printf("Digite o segundo valor ");
	scanf("%i", &b);
	//pede o terceiro valor
	printf("Digite o terceiro valor ");
	scanf("%i", &c);
	// faz o calculo
	if ((b*b) + (c*c) ==(a*a)){
	
		printf("O triangulo eh retangulo ");}
	else
	printf("O triangulo nao eh retangulo ");
		
	// fim
	return 0;
}
