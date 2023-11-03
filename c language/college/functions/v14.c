#include <stdio.h>
#include <stdlib.h>

int fatorial(int N);

int main(){
	int Num;
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &Num);
	
	printf("O fatorial de %d e %d", Num, fatorial(Num));
	return 0;
}

int fatorial(int N){
	int fatorial=N;
	
	while(N>1){
		N--;
		fatorial = fatorial*N;
	}
	return fatorial;
}
/*14. Faça um algoritmo que receba um número inteiro positivo N e calcule o seu
fatorial.*/
