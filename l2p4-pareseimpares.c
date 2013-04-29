/*
	Exercício: 04
	Data: 26/04/2013
	Autor: Elton Baroncello
	Descrição: Leia um vetor (20) de inteiros. O programa deve retornar deve retornar dois
			   vetores resultantes, sendo o primeiro com os números pares e o segundo com os números impares do vetor lido.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 20

int main(){
	int i, n[TAM], pares[TAM], impares[TAM], ci=0, cp=0;
	
	for(i=0; i<TAM; i++){
		printf("Digite um valor para N[%i]: ", i);
		scanf("%i", &n[i]);
	}
		
	for(i=0; i<TAM; i++){
		if(n[i]%2==0){
			pares[cp] = n[i]; cp++;
		} else {
			impares[ci] = n[i]; ci++;
		}
	}
	
	// vetor impar
	for(i=0; i<ci; i++){
		printf("Valor Impar de impares[%i] é: [%i]\n",i,impares[i]);
	}
	
	// vetor par
	for(i=0; i<cp; i++){
		printf("Valor Par de pares[%i] é: [%i]\n", i, pares[i]);
	}
		
	return 0;
}
