
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mosta q que o programa foi criado
	printf("SOMENTE NUMEROS POSITIVOS \n ");
	// declara as variaveis
	float nr;
	// pede um numero qualquer
	printf("Digite um numero qualquer ");
	scanf("%f", &nr);
	// impões que o nurero seja positivo
	while (nr <= 0){
		printf("Este numero nao eh positivo, digite novamente \n");
		scanf("%f", &nr);}
	if (nr > 0)	{
		printf("Esse numero eh positivo ");+
	}
	// fim
	return 0;
}
