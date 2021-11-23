
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// declara as variaveis do programa
	float a, b, c, d, media;
	// mostra a utilidadedo programa
	printf("MEDIA DE QUATRO VALORES \n");
	// pede os valores para a media
	printf("Digite o primerio numero: ");
	scanf("%f", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &c);
	
	printf("Digite o quarto numero: ");
	scanf("%f", &d);
	// efetua o calculo da media
	media = (a + b + c + d) / 4;
	// exibe o resulta o calculo
	printf("A media dos numeros e igual a %.3f", media);
	// fim
	return 0;
}
