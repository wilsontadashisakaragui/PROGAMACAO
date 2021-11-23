
#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// declara as variaveis do calculo
	int a, area;
	// mostra a utilidade do programa
	printf("CALCULE A AREA DE UM QUADRADO \n" );
	// pede a aresta do quadrado
	printf("Digite a aresta do quadrado: ");
	scanf("%i", &a);
	// efetua o cálculo da area
	area = a * a;
	// exibe o resultado do calculo
	printf("A area do quadrado e igual a: %i", area);
	//fim
	return 0;
}
