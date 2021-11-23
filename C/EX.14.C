#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa serve
	printf("MOSTRA O MAIOR DE TRES NUMEROS DIGITADOS \n");
	// declara as variaveis
	int a, b, c;
	// pede os numeros
	printf("Digite o primeiro numero ");
	scanf("%i", &a);
	
	printf("Digite o segundo numero ");
	scanf("%i", &b);
	
	printf("Digite o terceiro numero ");
	scanf("%i", &c);
	// faz as comparaçoes
	if  ((a >= b) && (b >= c)){
		printf(" a e o maior valor ");}
		else if((b >= a) && (a >= c)){
			printf("b e o maior valor ");}
			else {
				printf("c e o maior valor ");}
	// fim
		return 0;
}
