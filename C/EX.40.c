#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// declarando variaveis
  int  i, j, x, c;
  // pedindo numero de linhas e colunas da matriz
  printf("Digite a quantidade de linhas da matriz: ");
  scanf("%i", &i);
  while (i > 10 ){
    printf("\nErro! O valor digitado deve ser ate 10.\nDigite a quantidade de linhas da matriz: ");
    scanf("%i", &i);
  }
  printf("Digite a quantidade de colunas da matriz: ");
  scanf("%i", &j);
  while (j > 10 ){
    printf("\nErro! O valor digitado deve ser ate 10.\nDigite a quantidade de colunas da matriz: ");
    scanf("%i", &j);
  }
  // declarando matriz
  int numeros[i][j];
  // looping para popular o vetor
  for(int k = 0; k < i; k++){
  	for(int l = 0; l < j; l++){
  	  printf("Digite o %i.%i numero: ", k+1, l+1);
 	  scanf("%i", &numeros[k][l]);
    	}
  }
  // encontrar numero no vetor
  do {
 	// pede o numero para ser encontrado no vetor
 	printf("\nDigite o numero que deseja encontrar na matriz: ");
 	scanf("%i", &x);
 	// looping para encontrar o numero no vetor
 	for(int k = 0; k < i; k++){
      		for(int l = 0; l < j; l++){
 		    if (x == numeros[k][l]){
          			printf("\nNumero encontrado na matriz!\nPosicao: %i.%i", k, l);
      			break;
        		    } else if (k == i-1 && l == j-1){ // se for o ultimo looping sem resultado
      	  		printf("\nNumero nao encontrado na matriz!");
        		    }
      		}
    	}
    	printf("\nDeseja encontrar outro numero na matriz? (1-Sim/2-Nao) ");
    	scanf("%i", &c);
  } while (c == 1);
  printf("\nPrograma Finalizado");
  // fim
  return 0;
}

	
	
