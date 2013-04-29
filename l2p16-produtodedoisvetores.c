/*
	Exercício: 13
	Data: 28/04/2013
	Autor: Elton Baroncello
	Descrição:	Leia um vetor (15) de inteiros. Subtitua a seguir, todos os valores negativos por 1 e escreva o vetor modificado.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

int main(){
	int i, fator1[TAM], fator2[TAM], produto[TAM];

	for(i=0; i<TAM; i++){
		printf("Digite um valor para Fator1[%i]: ", i);
		scanf("%i", &fator1[i]);
		printf("Digite um valor para Fator2[%i]: ", i);
		scanf("%i", &fator2[i]);
	}

	for (i = 0; i < TAM; ++i){
		produto[i] = fator1[i]*fator2[i];
	}

	for (i = 0; i < TAM; ++i){
		printf("Fator1[%i]Xfator2[%i]=Produto[%i] ou %iX%i=%i\n", i, i, i, fator1[i], fator2[i], produto[i]);
	}

	return 0;
}