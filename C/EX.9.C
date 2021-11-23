#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// declara as variavei
	int a,b;
	// mostra para que o programa serve
	printf("Escolhe o maior de dois numeros digitados \n");
	// pede um numero
	printf("Digite o primeiro numero ",a);
	scanf("%i", &a);
	// pede um segundo numero
	printf("Digite o segundo numero ",b);
	scanf("%i", &b);
	// faz a comparação
	if (a>b)
	printf("a e maior");
	else
	printf("b e maior");
	// fim
	
	return 0;
}
