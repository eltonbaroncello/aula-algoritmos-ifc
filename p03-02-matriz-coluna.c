/*
	Exercício: 01
	Data: 03/05/2013
	Autor: Elton Baroncello
	Descrição: Leia uma matriz 5X5, e escreva os elementos da última coluna.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 5
#define C 5

int main(){
	int i, j, m[L][C];

	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("Digite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	printf("Segunda Coluna\n");
	for (j=0; j < C; j++){
		printf("[%i]\n", m[j][2]);
	}

	return 0;
}
