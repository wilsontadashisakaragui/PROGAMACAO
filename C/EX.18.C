
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// indica a que o programa foi concebido
	printf("SEXO, ALTURA E INDICE DE MASSA CORPOREA \n");
	// declaração de variaveis
	char sexo, M, F;
	float p, h, imc;
	// pede o sexo
	printf("Digite o sexo (M/F) ");
	scanf("%s", &sexo);
	// a escolha da tabela
	if ( sexo = M){{
	// pede o peso
	printf("Digite o peso ");
	scanf("%f", &p);
	// pede a altura
	printf("Digite a altura ");
	scanf("%f", &h);}
	// faz o calculo
	imc = p / (h * h);
	// faz a tabela
	if (imc < 20){
		printf("Abaixo do peso \n");}
	
	else if (imc <= 25){
	printf("Peso ideal \n");}
		
		else {
			printf("Acima do peso ");}}
			
	else (sexo = F);{{
		// pede o peso
	printf("Digite o peso ");
	scanf("%f", &p);}
	// pede a altura
	printf("Digite a altura ");
	scanf("%f", &h);
	// faz o calculo
	imc = p / (h * h);
	// faz a tabela
	if (imc < 19){
		printf("Abaixo do peso ");}
	
	else if (imc <= 24){
	printf("Peso ideal ");}
		
		else {
			printf("Acima do peso ");}}
			
	return 0;

}
