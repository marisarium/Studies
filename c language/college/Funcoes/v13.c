#include <stdio.h>
#include <stdlib.h>

int somaAlgarismos(int N);

int main(){
	int Num;
	printf("Digite um numero inteiro entre 0 e 10.000: ");
	scanf("%d", &Num);
	
	printf("A soma de todos os algarismos de %d e %d", Num,somaAlgarismos(Num));
	return 0;
}

int somaAlgarismos(int N){
	int soma=0;
	
	while(N>0){
		soma += N%10;
		N /= 10;
	}
	
	return soma;
}
/*13. Escreva uma função que receba um número inteiro N (0 < N < 10000) e retorne a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o
valor 8 (2 + 5 + 1).*/
