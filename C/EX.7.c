#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// informa o objetivo do programa
	printf("PROGRAMA QUE CALCULA TROCO DE UMA COMPRA \n");
	// declara as variaveis
	float a, b, c, d, e, soma, pg, troco;
	// entra co os produtos e pre�o
	printf("Digite o preco do primeiro produto: ");
	scanf("%f", &a);
	
	printf("Digite o preco do segundo produto: ");
	scanf("%f", &b);
	
	printf("Digite o preco do terceiro produto: ");
	scanf("%f", &c);
	
	printf("Digite o preco do quarto produto: ");
	scanf("%f", &d);
	
	printf("Digite o preco do quinto produto: ");
	scanf("%f", &e);
	// soma os valores do produto
	soma = a + b + c + d + e;
	// apresenta o total da compra
	printf("Total da compra e: %.2f",soma);
	// apresenta  o valor para pagar a compra
	printf("\nConta pago com: ");
	scanf("%f", &pg);
	// calculo do troco
	troco = pg - soma;
	// apresenta o troco
	printf("\nO troco e: %.2f",troco);
	scanf("%f", &troco);
	// fim	
	return 0;
}
