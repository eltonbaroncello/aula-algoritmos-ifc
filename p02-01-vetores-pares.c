/*
	Exercício: 01
	Data: 26/04/2013
	Autor: Elton Baroncello
	Descrição: Leia um vetor (20) de inteiros. A seguir, escreva somente os valores pares.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 20

int main(){
	int i, n[TAM];
	
	for(i=0; i<TAM; i++){
		printf("Digite um valor para N[%i]: ", i);
		scanf("%i", &n[i]);
	}
		
	for(i=0; i<TAM; i++){
		if(n[i]%2==0){
			printf("Valor Par de N[%i] é: [%i]\n",i,n[i]);
		}
	}
		
	return 0;
}