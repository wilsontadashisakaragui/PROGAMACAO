#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi desenvolvido
	("EXIBIR NOS NUMEROS DA SERIE DE BERGAMASCHI \n"); // 1,1,1,3,5,9,17,....
	// declara as variaveis - nosso caso seria 20, mas pode ser  qualquer quantidade
	int i, n, t1 = 1, t2 = 1, t3 = 1, p;
	// pede o numero de termos
	printf("QUAL O NUMERO DE TERMOS?: ");
	scanf("%i. ", &n);
	// mostra o calculo
	for(i = 1; i <= n; i++){
		printf("%i. ", t1);
		p = t1 + t2 + t3;
		t1 = t2;
		t2 = t3;
		t3 = p;
	
	}

	
	return 0;
}
