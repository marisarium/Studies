#include <stdio.h>
/*Autor: Marisa Guimar�es Pereira - 2� Periodo - Manh� - FACAPE
Programa��o Estruturada - Prof. Carlinhos*/
int main(){
	
	int N, dig;
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if(N == 0){
		dig = 1;		
	}
	else{
		while(N != 0){
			dig++;
			N /= 10;
		}
	}
	printf("A quantidade de digitos do numero inteiro e %d", dig);
	
	return 0;
}
