/*
	Exercício: 01
	Data: 25/04/2013
	Autor: Elton Baroncello
	Descrição: Série de Ricci.
	
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, a, b, c=0;
	printf("Digite o primeiro termo para série de Ricci: ");
	scanf("%i", &a);

	printf("Digite o segundo termo para série de Ricci: ");
	scanf("%i", &b);

	printf("Digite o número de termos que deseja para a série de Ricci: ");
	scanf("%i", &n);
	
/*	printf("%s", "[");
	printf("%i", a);
	printf("%s", "-");
	printf("%i", b);
	printf("%s", "-");
	*/
	printf("[%i-%i-", a , b);
	
	while(n>0){
			c = a+b;
			a = b;
			b = c;
			if(n>1){
				printf("%i-", c);
			} else {
				printf("%i", c);
				}
			n--;
		}
	printf("%s", "]");

	return 0;
}
