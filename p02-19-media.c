/*
	Exercício: 19
	Data: 29/04/2013
	Autor: Elton Baroncello
	Descrição:	Faça um programa que preencha um vetor com o número de matrícula de 7 alunos
				e carregue outro vetor com a média final desses alunos. Calcule e mostre:
				-a Matrícula do aluno com a maior média (desconcidere empates)
				-Para cada aluno não aprovado, isto é, com média menor do que 7,
					mostrar quanto esse aluno precisa para tirar na prova de exame final
					considerar que a média para aprovação no exame é 5.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 7

int main(){
	int matricula[TAM], iMaior=0, i;
	float media[TAM], vMaior=0, nMinima;

	// carrega a matricula dos alunos
	for (i = 0; i < TAM; i++){
		printf("Informe a matricula do aluno[%i](*somente números)\n", i);
		scanf("%i", &matricula[i]);
	}

	// carregar as médias
	for (i = 0; i < TAM; i++){
		printf("Informe a média do aluno[%i] de Matricula:%i\n", i, matricula[i]);
		scanf("%f", &media[i]);

		// pega a maior média
		if(media[i]>vMaior){
			vMaior = media[i];
			iMaior = i;
		}
	}

	// Mostra a maior média
	printf("Maior média é %f do aluno[%i] de matricula:%i \n", vMaior, matricula[iMaior], iMaior);

	// Mostra alunos abaixo da média e a nota mínima para aprovação
	for (i = 0; i < TAM; i++){
		if(media[i]<7){
			// considerei 4 notas + uma final para média 5
			nMinima = 25-(media[i]*4);
			if(nMinima>10){
				printf("O aluno[%i], Matricula:%i reprovado\n", i, matricula[i]);
			} else {
				printf("O aluno[%i], Matricula:%i precisa de %f para ser aprovado\n", i, matricula[i], nMinima);	
			}
		}
	}

	return 0;
}