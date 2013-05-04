/*
	Exercício: 04
	Data: 03/05/2013
	Autor: Elton Baroncello
	Descrição: Leia uma matriz 4X4, e faça a soma dos elementos das colunas.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 4
#define C 4

int main(){
	int i, j, m[L][C], soma[C];

	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			soma[i] = 0;
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	printf("Total das colunas\n\n");
	for(i=0; i < L; i++){
		printf("[\t");
		for (j=0; j < C; j++){
			soma[j] = soma[j]+(m[i][j]);
			printf("%i\t", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n ---------------------------------------\n\n[\t");
	for(j=0; j < C; j++){
		printf("%i\t", soma[j]);
	}
	printf("]\n\n\n");

	return 0;
}
