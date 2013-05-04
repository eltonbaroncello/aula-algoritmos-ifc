/*
	Exercício: 07
	Data: 04/05/2013
	Autor: Elton Baroncello
	Descrição:	Leia uma matriz de caracteres, onde a primeira linha armazena o seu nome, a
				segunda o sobrenome, e a terceira a cidade que nasceu.

				obs: Faltou tratar exceções e deixar a entrada dos dados mais dinámica.

	Resultado:
	ELTON
	BARONCELLO
	VIDEIRA

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 3
#define C 10

int main(){
	int i, j, cNome=0, cSobrenome=0, cCidade=0;
	char m[L][C];

	printf("Entre com o que é solicitado %dX%d\n\n\n", L, C);
	
	for(i=0; i < 5; i++){
		printf("Digite a letra %i do seu Nome\n", i);
		scanf("%s", &m[0][i]);
		cNome++;
	}

	for(i=0; i < 10; i++){
		printf("Digite a letra %i do seu sobrenome\n", i);
		scanf("%s", &m[1][i]);
		cSobrenome++;
	}

	for(i=0; i < 7; i++){
		printf("Digite a letra %i do nome de sua cidade \n", i);
		scanf("%s", &m[2][i]);
		cCidade++;
	}

	// Escrevendo o nome
	printf("\n\n\t");
	for(i=0; i < cNome; i++){
		printf("%c", m[0][i]);
	}

	// Escrevendo o sobrenome
	printf("\n\t");
	for(i=0; i < cSobrenome; i++){
		printf("%c", m[1][i]);
	}

	// Escrevendo o cidade
	printf("\n\t");
	for(i=0; i < cCidade; i++){
		printf("%c", m[2][i]);
	}

	return 0;
}
