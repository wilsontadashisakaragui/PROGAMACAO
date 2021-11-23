#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// mostra a que o programa foi desenvolvido
	printf("MASCULINO OU FEMININO \n");
	// delaração de variaveis
	char F, M, sexo;
	// pede o sexo do usuario
	printf("Digite (M ou F), para determinar o sexo:  ");
	scanf("%s", &sexo);
	
	while ((toupper(sexo) != 'M' &&  toupper(sexo) != 'F')){
		printf("Digite novamente ");
		scanf("%s", &sexo);}
		if (sexo =='M'){
		printf("Voce eh do sexo masculino");}
		else {
			printf("Voce eh do sexo feminino");}
		return 0;
}
