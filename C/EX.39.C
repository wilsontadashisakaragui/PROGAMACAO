#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {// declarando variaveis
  int numeros[3][4], mult;
  // pedindo numeros
  for(int i=0; i<3; i++){ // linha
      for(int j=0; j<4; j++){ // coluna
        printf("Digite o %i.%i numero: ", i+1, j+1);
        scanf("%i", &numeros[i][j]);
      }
  }
  // pedindo numero para multiplicar
  printf("\nDigite o numero pelo qual deseja multiplicar os valores do vetor: ");
  scanf("%i", &mult);
  // multiplicando e armazenando na matriz
  for(int i=0; i<3; i++){ // linha
      for(int j=0; j<4; j++){ // coluna
        numeros[i][j] = numeros[i][j] * mult;
      }
  }
  // exibindo numeros
  printf("\nOs novos numeros da matriz sao: \n");
  for(int i=0; i<3; i++){
      for(int j=0; j<4; j++){
        printf("%i ", numeros[i] [j]);
      }
      printf("\n");
  }
  // fim

	
	return 0;
}
