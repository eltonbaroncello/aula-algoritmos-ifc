/*
	Exercício: 12
	Data: 27/04/2013
	Autor: Elton Baroncello
	Descrição:	Gere um vetor (50) de inteiros, onde o primeiro elemento será fornecido pelo usuário,
				e os elementos seguintes serão o triplo do elemento anterior.

				Teóricamente está certo, mas está gerando alguns resultados com valor negativo.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 50

int main(){
	int i, j=1, v[TAM];

	printf("\nDigite um valor para iniciar o vetor: ");
	scanf("%d", &v[0]);

	printf("\n\nSérie do vetor com o valor triplo do anterior.\nVetor[0]=%d\n",v[0]);
	for(i=0; i<TAM-1; i++){
		v[j] = v[i]*3;
		printf("Vetor[%d]=%d\n", j, v[j]);
		j++;
	}
	
	return 0;
}