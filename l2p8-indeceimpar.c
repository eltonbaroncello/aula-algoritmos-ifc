/*
	Exercício: 08
	Data: 27/04/2013
	Autor: Elton Baroncello
	Descrição: Leia um vetor (10) de inteiros. A seguir, escreva somente os valores pares.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

int main(){
	int i, v[TAM];
	
	for(i=0; i<TAM; i++){
		printf("\nDigite um valor para Vetor[%i]: ", i);
		scanf("%i", &v[i]);
	}
	
	printf("\n\nVetore com indice impar\n");
	for(i=0; i<TAM; i++){
		if(i%2!=0){
			printf("Verto[%i]=%i\n", i, v[i]);
		}
	}

	return 0;
}