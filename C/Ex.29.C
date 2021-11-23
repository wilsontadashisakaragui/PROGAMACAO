#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//mostra a que o programa foi desenvolvido
	printf("EXIBE A SOMA DOS NUMEROS ITEIROS POSITIVOS NO INTERVALO DE UM A CEM \n");
	// declara as variaveis 
	int pri = 1, ult  = 100, n, sum;
	
	
	n = (ult - pri +1);
	sum = ((pri + ult)* n/2);
	printf("A SOMA EH = %i", sum);
	
		
	return 0;
}
