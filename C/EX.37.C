#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {  // declarando variaveis
  int n, x, c;
  // pedindo numero de valores no vetor
  printf("Digite a quantidade dos valores do vetores: ");
  scanf("%i", &n);
  while (n > 20 ){
printf("\nErro! O valor digitado deve ser ate 20.\nDigite a quantidade de valor do vetor: ");
scanf("%i", &n);
  }
  // declarando vetor
  int numeros[n-1];
  // looping para popular o vetor
  for(int i = 0; i < n; i++){
  	printf("Digite  %i numero: ", i+1);
 	scanf("%i", &numeros[i]);
  }
 // encontrar numero no vetor
 do {
 	// pede o numero para ser encontrado no vetor
 	printf("\nDigite o numero que deseja encontrar no vetor: ");
 	scanf("%i", &x);
 	// looping para encontrar o numero no vetor
 	for(int i = 0; i < n; i++){
 		if (x == numeros[i]){
        	printf("\nNumero encontrado no vetor!\nPosicao: %i", i+1);
        	break;
      } else if (i == n-1){ // se for o ultimo looping sem resultado
      	printf("\nNumero nao encontrado no vetor!");
      }
    }
    printf("\nDeseja encontrar outro numero no vetor? (1-Sim/2-Nao) ");
    scanf("%i", &c);
  } while (c == 1);
  printf("\nPrograma Finalizado");

	
	return 0;
}
