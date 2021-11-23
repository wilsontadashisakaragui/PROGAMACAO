#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float m, p1, p2;
	printf("digite a pimeira nota ");
	scanf("%f",&p1);
	printf("digite a segunda nota ");
	scanf("%f", &p2);
	m = ((p1 + (2*p2))/ 3);
	printf("a media eh  %.2f \n", m);
	if (m <5){
		printf("reprovado \n");}
	if (m >= 5){
		printf ("aprovado ");
		}
		

	return 0;
}
