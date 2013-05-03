/*
	Exercício: 01
	Data: 03/05/2013
	Autor: Elton Baroncello
	Descrição: Leia uma matriz 4X4, e escreva os elementos da 2a linha.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 4
#define C 4

int main(){
	int i, j, m[L][C];

	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("Digite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	printf("Matriz\n");
	for(i=0; i < L; i++){
		printf("[\t");
		for (j=0; j < C; j++){
			printf("%i\t", m[i][j]);
		}
		printf("]\n");
	}

	return 0;
}
