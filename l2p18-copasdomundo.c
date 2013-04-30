/*
	Exercício: 18
	Data: 28/04/2013
	Autor: Elton Baroncello
	Descrição:	Desenvolva um programa que preencha em C que leia todos os anos em que o Brasil foi
				campeão mundial de futebol e após coletar todos os dados:
					-Informar a quantidade de anos que já se passaram desde a conquista de cada titulo até hoje
					-Quantos quantos anos se passaram desde a conquista de um ano até outro
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 5

int main(){
	int conquistas[TAM], nConquistas=0, ano, i, j, ax, hoje=2013;

	for (i = 0; i < TAM; ++i){
		ano = 0;
		printf("Agora digite um ano que o Brasil ganhou a copa do mundo\n");
		scanf("%i", &ano);
		if(ano>0){
			conquistas[i] = ano;
			nConquistas++;
		} else {
			i=TAM;
		}
	}

	// Mesma rotina do exercício 5
	// Unica diferença é que percolo o vetor só até o número de conquistas
	// e não pelo tamanho do vetor
	for(i=0; i<nConquistas; i++){
		// move o indice maior para a direita
		for (j = 0; j < nConquistas-1; ++j){
			if(conquistas[j]>=conquistas[j+1]){
				ax = conquistas[j+1];
				conquistas[j+1] = conquistas[j];
				conquistas[j] = ax;
			}
		}
	}

	// informar a quantidade de anos que já se passaram desde a conquista de cada título até hoje
	for (i = 0; i < nConquistas; ++i){
		printf("se passaram %i anos De %i ate %i\n", (hoje - conquistas[i]), conquistas[i], hoje);
	}

	// informar a quantidade de anos entre um título e outro
	for (i = 0; i < nConquistas-1; ++i){
		printf("%i anos de %i ate %i\n", (conquistas[i+1] - conquistas[i]), conquistas[i], conquistas[i+1]);	
	}

	return 0;
}