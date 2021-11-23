#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi feito
	printf("MOSTRA O INDICE DE MASSA CORPOREA \n");
	// declara as variaveis
	float peso, altura, imc;
	// pede o peso
	printf("Digite o peso ");
	scanf("%f", &peso);
	// pede a altura
	printf("Digite a altura ");
	scanf("%f", &altura);
	// calcula o IMC
	imc = peso / (altura * altura);
	
	printf("Seu imc eh %.2f \n", imc);
	
		if (imc < 20){
		printf("Abaixo do peso ");}
		
		else if(imc <= 25){
		printf("Peso ideal ");}
		
		else{
		printf("Acima do peso ");
		//fim
		}
	return 0;
}
