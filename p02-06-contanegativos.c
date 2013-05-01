/*
	Exercício: 06
	Data: 27/04/2013
	Autor: Elton Baroncello
	Descrição: Leia um A vetor (10) de inteiros e o escreva. Em seguida conte quantos são negativos e escreva esta informação.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

int main(){
	int i, v[TAM], nNegativos=0;
	
	for(i=0; i<TAM; i++){
		printf("\nDigite um valor para Vetor[%i]: ", i);
		scanf("%i", &v[i]);
		if(v[i]<0){
			nNegativos ++;
		}
	}
	
	printf("\n\nVetores\n");
	for (i = 0; i < TAM; ++i){
		printf("Vetor[%i] = %i\n", i, v[i]);
	}
	if(nNegativos==0){
		printf("\nNenhum vetor negativo\n\n");
	} else if (nNegativos==1){
		printf("\nUm vetor com valor negativo\n\n");
	} else {
		printf("\n%i vetores negativos\n\n", nNegativos);
	}
	
	
	return 0;
}
