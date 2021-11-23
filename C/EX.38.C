#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {  // declarando variaveis
  int numeros[2][3];
  // pedindo numeros
  for(int i=0; i<2; i++){ // linha
      for(int j=0; j<3; j++){ // coluna
        printf("Digite o %i.%i numero: ", i+1, j+1);
        scanf("%i", &numeros[i][j]);
      }
  }
  // exibindo numeros
  printf("\nOs numeros digitados na matriz foram: \n");
  for(int i=0; i<2; i++){
      for(int j=0; j<3; j++){
        printf("%i ", numeros[i][j]);
      }
      printf("\n");
  }
  // fim

	
	return 0;
}
