#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que serve o programa
	printf("CLASSIFICAÇAO DE TRIANGULOS \n");
	// declara as variaveis 
	float l1, l2, l3;
	// pede o primeriro lado
	printf("Digite o primeito lado ");
	scanf("%f", &l1);
	// pede o segundo lado
	printf("Digite o segundo lado ");
	scanf("%f", &l2);
	// pede o terceiro lado
	printf("Digite o terceiro lado ");
	scanf("%f", &l3);
	// inicia as comparações
	if (((l1 + l2) > l3) && 
       ((l1 + l3) > l2) &&
       ((l2 + l3) > l1)){
	   
	   if((l1 == l2) && (l1 == l3)){
	   
	   printf("Triangulo equilatero ");
		}
			else if((l1 != l2) && (l1  != l3)){
			printf("Triangulo escaleno ");}
		
			else{
			printf("Triangulo isoceles ");
		}	
			}else{
			printf("Nao e triangulo ");
		}
	
		return 0;
}
