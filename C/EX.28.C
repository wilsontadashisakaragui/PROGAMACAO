
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi desenvolvido
	printf("EXIBE A TADUADA DE UM A VINTE E INTERROMPE NO DEZ \n");
	// declara as variaveis
	int v,  t;
	char c;
	// inicio
	for (v = 1; v <= 20; v++){
	t = v * v;
		printf("%i x %i = %i \n", v, v, t);
if(v==10)

break;}
if(v==10){
	printf("Chegou no dez \n");}

//	for (v==10);
		printf("DIGITE QUALQUER TECLA PARA CONTINUAR \n");
	scanf("%c", &c);
	
		
	return 0;
}
