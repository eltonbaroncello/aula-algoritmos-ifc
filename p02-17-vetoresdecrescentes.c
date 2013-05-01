/*
	Exercício: 17
	Data: 28/04/2013
	Autor: Elton Baroncello
	Descrição:	Faça um programa que preencha dois vetores de 10 posições cada um. Determine e mostre um
				terceiro contendo os elementos dos dois vetores anteriores ordenados de maneira decrescente
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

int main(){
	int i, j, a[TAM], b[TAM], c[TAM*2], ax;
	
	// pegar os valores de a e b
	for(i=0; i<TAM; i++){
		printf("\nDigite um valor para A[%i]: ", i);
		scanf("%i", &a[i]);
		printf("\nDigite um valor para B[%i]: ", i);
		scanf("%i", &b[i]);
	}
	
	for (i = 0; i < TAM*2; ++i){
		if(i<TAM){
			c[i] = a[i];
		} else {
			c[i] = b[i-10];
		}
	}

	// Mesma rotina do exercício 5 só que invertida
	for(i=0; i<TAM*2; i++){
		// move o indice maior para a direita
		for (j = 0; j < (TAM*2)-1; ++j){
			// esse if inverte de crescente para descrescente mudando de >= para <=
			if(c[j]<=c[j+1]){
				ax = c[j+1];
				c[j+1] = c[j];
				c[j] = ax;
			}
		}
	}

	printf("\n\nVetore Ordenados\n");
	for (i = 0; i < TAM*2; ++i){
		printf("C[%i] = %i\n", i, c[i]);
	}
	
	return 0;
}