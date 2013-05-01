/*
	Exercício: 02
	Data: 25/04/2013
	Autor: Elton Baroncello
	Descrição: Divisores de um número inteiro.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, c=2;
	
	printf("%s","Digite um número n");
	scanf("%d",&n);
	
	while(c<n){
			if(n%c==0){
				printf("%i\n",c);
				}
			c++;
		}
	
	return 0;
}

