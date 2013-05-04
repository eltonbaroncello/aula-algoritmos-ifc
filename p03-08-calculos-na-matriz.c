/*
	Exercício: 08
	Data: 04/05/2013
	Autor: Elton Baroncello
	Descrição:	Que lê uma matriz M (6, 6) e calcule:
				a. Soma dos elementos da diagonal principal;
				b. Soma dos elementos da diagonal secundária;
				c. Soma dos elementos acima da diagonal principal;
				d. Soma dos elementos abaixo da diagonal principal;
				e. Soma dos elementos acima da diagonal secundária;
				f. Soma dos elementos abaixo da diagonal secundária;

    MATRIZ 6X6  [ i,j ]
    0 1 2 3 4 5 6 --j
0 [ a 0 0 0 0 0 b ]
1 [ 0 a 0 0 0 b 0 ]
2 [ 0 0 a 0 b 0 0 ]
3 [ 0 0 0 a 0 0 0 ]
4 [ 0 0 b 0 a 0 0 ]
5 [ 0 b 0 0 0 a 0 ]
6 [ b 0 0 0 0 0 a ]
i

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 6
#define C 6

int main(){
	int i, j, m[L][C], aSoma=0, bSoma=0, cSoma=0, dSoma=0, eSoma=0, fSoma=0;

	/* carregando dados automaticamente para teste
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			//teste 
			m[i][j]=j+1;
		}
	}
	*/
	
	// solicita a entrada dos dados
	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}


	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			// a. Soma dos elementos da diagonal principal;
			if(i==j){
				aSoma = aSoma + m[i][j];
			}

			// b. Soma dos elementos da diagonal secundária;
			if (j==C-i-1) {
				bSoma = bSoma + m[i][j];
			}

			// c. Soma dos elementos acima da diagonal principal;
			if (j==i+1) {
				cSoma = cSoma + m[i][j];
			}

			// d. Soma dos elementos abaixo da diagonal principal;
			if (j==i-1) {
				dSoma = dSoma + m[i][j];
			}

			// e. Soma dos elementos acima da diagonal secundária;
			if (j==C-i-2) {
				eSoma = eSoma + m[i][j];
			}

			// f. Soma dos elementos abaixo da diagonal secundária;
			if (j==C-i) {
				fSoma = fSoma + m[i][j];
			}

		}
	}

	printf("\n\n  Matriz \n\n");
	for(i=0; i < L; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < C; j++){
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");
	printf("\t A: %i\n", aSoma);
	printf("\t B: %i\n", bSoma);
	printf("\t C: %i\n", cSoma);
	printf("\t D: %i\n", dSoma);
	printf("\t E: %i\n", eSoma);
	printf("\t F: %i\n", fSoma);

	return 0;
}
