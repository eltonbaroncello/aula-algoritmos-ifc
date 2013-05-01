/*
	Exercício: 13
	Data: 28/04/2013
	Autor: Elton Baroncello
	Descrição:	Leia um vetor (15) de inteiros. Subtitua a seguir, todos os valores negativos por 1 e escreva o vetor modificado.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 15

int main(){
	int i, v[TAM];

	for(i=0; i<TAM; i++){
		printf("Digite um valor para N[%i]: ", i);
		scanf("%i", &v[i]);
	}

	for (i = 0; i < TAM; ++i){
		if(v[i]<0){
			v[i]=1;
		}
	}

	for (i = 0; i < TAM; ++i){
		printf("v[%i]=%i\n", i, v[i]);
	}

	return 0;
}