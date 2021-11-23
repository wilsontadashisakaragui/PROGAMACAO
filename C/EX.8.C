
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// exibe a utilidade do programa
	printf("CALCULO O INDICE DE MASSA MUSCULAR  \n");
	// declara as avariaveis
	float p, h, imc;
	// pede o peso
	printf("Digite o peso: ");
	scanf("%f", &p);
	// pede a altura
	printf("Digite a altura: ");
	scanf("%f", &h);
	// calcula o indice de massa muscular
	imc = p / (h * h);
	// mostra o resultado do indice
	printf("O IMC e: %.2f", imc);
	scanf("%f", &imc);
	// fim
	return 0;
}
