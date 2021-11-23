#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// informa a que o programa serve
	printf("INDICA ENTRE DOIS VALORES QUAL E O MAIOR, MENOR OU IGUAL \n");
	// declara as variaveis
	int a, b;
	// pede o primeiro valor
	printf("Digite um numero ");
	scanf("%i",&a);
	// pede o segundo número
	printf("Digite um segundo ");
	scanf("%i", &b);
	// faz a comparação
	if ( a > b){
	printf("a e o maior valor ");}
	// faz uma segunda comparação
	else if (a < b){
	printf(" b e o maior valor \n");}
	else {
	printf(" a e b sao iguais ");
	// fim
	}
	
	return 0;
}
