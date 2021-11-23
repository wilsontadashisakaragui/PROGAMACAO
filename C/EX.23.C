#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi desenvolvido
	printf("O PRIMEIRO NUMERO TEM DE SER MAIOR QUE O SEGUNDO \n");
	// declara as variaveis
	int n1, n2;
	// pede o primeiro numero
	printf("Digite o primeiro numero ");
	scanf("%i", &n1);
	// pede o segundo numero
	printf("Digite o segundo numero ");
	scanf("%i",&n2);
	// impõe a condição
	while (n1 < n2){
		printf ("n1 nao eh maior que n2, digite outro numero  ");
		scanf("%i", &n2);}
	if (n1 > n2){
		printf("n1  maior que n2");}
	// fim
		return 0;
}
