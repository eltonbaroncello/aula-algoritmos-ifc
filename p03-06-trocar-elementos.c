/*
	Exercício: 06
	Data: 04/05/2013
	Autor: Elton Baroncello
	Descrição:	Leia uma matriz 3X3, e troque os elementos da 1a com a última coluna.

    MATRIZ 3X3  [ i,j ]

    0 1 2 --j       0 1 2 --j
0 [ 1 2 3 ]     0 [ 1 2 1 ]
1 [ 1 2 3 ]  =  1 [ 3 3 3 ]
2 [ 1 2 3 ]     2 [ 1 2 2 ]
i               i

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 3
#define C 3

int main(){
	int i, j, m[L][C], aux;

	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("Digite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	for (i = 0; i < C; i++){
		aux     = m[1][i];
		m[1][i] = m[i][2];
		m[i][2] = aux;
	}

	printf("\n\n  Resultado:\n\n");
	for(i=0; i < L; i++){
		printf("  %i\t[.", i);
		for (j=0; j < C; j++){
			printf("%i.", m[i][j]);
		}
		printf("]\n");
	}

	return 0;
}
