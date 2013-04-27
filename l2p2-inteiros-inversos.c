/*
	Exercício: 02
	Data: 26/04/2013
	Autor: Elton Baroncello
	Descrição: Leia um vetor (6) de inteiros e escreva na orden inversa.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 6

int main(){
	int i, n[TAM];
	
	for(i=0; i<TAM; i++){
		printf("Digite um valor para N[%i]: ", i);
		scanf("%i", &n[i]);
	}
		
	for(i=TAM-1; i>=0; i--){
		printf("Valor de N[%i] é: [%i]\n",i,n[i]);
	}
		
	return 0;
}
