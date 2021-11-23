
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi proposto
	printf("CALCULA A AREA DE UM TERRENO RETANGULAR \n");
	// declara as variaveis
	float b, h, area;
	// pede a base retangulo
	printf("Digite a base do retangul ");
	scanf("%f", &b);
	// pede a altura do retangulo
	printf("Digite a altura do retangulo ");
	scanf("%f", &h);
	// calcula a area
	area = b * h;
	// mostra o resultado
	if (area >= 100){
		printf("Terreno grande ");}
		else{
		printf("Terreno pequeno ");}
	// fim
		return 0;
}
