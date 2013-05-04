/*
	Exercício: 05
	Data: 03/05/2013
	Autor: Elton Baroncello
	Descrição:	Monte e exiba uma matriz identidade 10 x 10, sabendo que em uma matriz identidade
				os elementos da diagonal principal são 1 e os demais elementos são 0.

    MATRIZ 10X10  [ i,j ]
    0 1 2 3 4 5 6 7 8 9--j
0 [ 1 0 0 0 0 0 0 0 0 0 ]
1 [ 0 1 0 0 0 0 0 0 0 0 ]
2 [ 0 0 1 0 0 0 0 0 0 0 ]
3 [ 0 0 0 1 0 0 0 0 0 0 ]
4 [ 0 0 0 0 1 0 0 0 0 0 ]
5 [ 0 0 0 0 0 1 0 0 0 0 ]
6 [ 0 0 0 0 0 0 1 0 0 0 ]
7 [ 0 0 0 0 0 0 0 1 0 0 ]
8 [ 0 0 0 0 0 0 0 0 1 0 ]
9 [ 0 0 0 0 0 0 0 0 0 1 ]
i

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 10
#define C 10

int main(){
	int i, j, m[L][C], soma[C];

	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			//if(i==j || j==C-i-1){ // deixa as duas diagonais com valores 1 e os demais 0
			if(i==j){
				m[i][j] = 1;
			} else {
				m[i][j] = 0;
			}
		}
	}

	printf("\n\n  Matriz Diagonal\n\n");
	for(i=0; i < L; i++){
		printf("  %i [ ", i);
		for (j=0; j < C; j++){
			soma[j] = soma[j]+(m[i][j]);
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}


	return 0;
}
