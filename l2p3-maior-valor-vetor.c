/*
	Exercício: 03
	Data: 26/04/2013
	Autor: Elton Baroncello
	Descrição: Leia um vetor (10) de inteiros. A seguir, percorra o vetor e retorne o maior valor

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 10

int main(){
	int i, n[TAM],vmaior=0, imaior=0;
	
	for(i=0; i<TAM; i++){
		printf("Digite um valor para N[%i]: ", i);
		scanf("%i", &n[i]);
	}
		
	for(i=0; i<TAM; i++){
		if(vmaior<n[i]){
			imaior = i;
			vmaior = n[i];
		}
	}
	
	printf("O maior valor é de N[%i] = [%i]\n",vmaior,n[imaior]);
	// para n[0=1,1=2,2=9,3=4,4=5,5=6,6=7,7=8,8=0,9=3]
	// O maior valor é de N[2] = 9;
		
	return 0;
}