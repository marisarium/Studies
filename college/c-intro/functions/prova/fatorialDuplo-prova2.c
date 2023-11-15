#include <stdio.h>
#include <stdlib.h>

//Nome do aluno: Marisa Guimaraes Pereira, ciencia da computacao, manha, 2� periodo, programa��o imperativa, Prof Carlinhos
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
/*A fun��o fatorial duplo � definida como o produto de todos os n�meros naturais �mpares de 1 
at� algum n�mero natural �mpar N. Assim, o fatorial duplo de 5 �: 5!! = 1 * 3 * 5 = 15. 
Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo impar N e 
retorne o fatorial duplo desse n�mero. Lembre-se de validar o valor de N antes de chamar a fun��o.*/
