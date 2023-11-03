#include <stdio.h>
#include <stdlib.h>

//Nome do aluno: Marisa Guimaraes Pereira, ciencia da computacao, manha, 2º periodo, programação imperativa, Prof Carlinhos
int fatorial(int n){
	if(n<0)
		return 0;
	else
		return n*fatorial(n-2);
}

int main(){
	int N;
	scanf("%d", &N);
	if(N%2 != 0){
		printf("%d",fatorial(N));
	}
	return 0;
}
/*A função fatorial duplo é definida como o produto de todos os números naturais ímpares de 1 
até algum número natural ímpar N. Assim, o fatorial duplo de 5 é: 5!! = 1 * 3 * 5 = 15. 
Faça uma função recursiva que receba um número inteiro positivo impar N e 
retorne o fatorial duplo desse número. Lembre-se de validar o valor de N antes de chamar a função.*/
