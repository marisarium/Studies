#include <stdio.h>
/*Autor: Marisa Guimar�es Pereira - 2� Periodo - Manh� - FACAPE
Programa��o Estruturada - Prof. Carlinhos*/

int main(){
	int N, num, den, i;
	float soma;
	printf("Qual a quantidade de termos da serie: ");
	scanf("%d", &N);
	printf("A serie: ");	
	
	for(i=1;i<=N; i++){
		
		num = i;
		den = num *11 + 1;
		soma += num/den;//ele entra no for mas n�o t� somando?
		
		printf("%d/%d ", num, den);
	}
	
	printf("Tem soma: %.2f", soma);	
		
	return 0;
}
