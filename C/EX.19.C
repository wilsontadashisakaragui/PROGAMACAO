
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) { 
	printf("INDICADOR DE VELOCIDADE \n");
	float V, v0, a, t;
	printf("Digite a velocidade inicial em m/s ");
	scanf("%f", &v0);
	printf("Digite a aceleraçao em m/s*s ");
	scanf("%f", &a);
	printf("Digite o tempo em s ");
	scanf("%f", &t);
	V = (((v0 + (a * t)) * 3.6));
	printf("A velocidade eh %.2f \n", V);

		if(V <= 40){
		printf("Veiculo muito lento \n");}
		if((V>40) && (V <= 60)){
		printf("Velocidade permitida \n");}
		else if((V > 60) && (V <= 80)){
			printf("Velocidade de cruzeiro \n");}
		else if((V > 80) && (V <= 120)){
			printf("Veiculo rapido ");}
		if(V > 120 ){   
				printf("Veiculo muito rapido ");}
					
			
		
	
	
	return 0;}
