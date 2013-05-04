/*
	Exercício: 01
	Data: 03/05/2013
	Autor: Elton Baroncello
	Descrição: Leia uma matriz 4X4, e faça a soma dos elementos das linhas.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 4
#define C 4

int main(){
	int i, j, m[L][C], soma;

	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	printf("Matriz\n");
	for(i=0; i < L; i++){
		soma = 0;
		printf("[");
		for (j=0; j < C; j++){
			soma = soma+(m[i][j]);
			printf(" + (%i)", m[i][j]);
		}
		printf(" ] = %i\n", soma);
	}

	return 0;
}
