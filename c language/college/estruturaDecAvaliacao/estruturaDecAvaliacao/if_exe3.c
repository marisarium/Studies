#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Questao 3 - Marisa Guimaraes Pereira - Programação Imperativa - manha
	
	int N, P1;//P = parte do calculo
	
	printf("Digite um numero entre 1.000 e 10.000: ");
	scanf("%d", &N);
	
	if((N >= 1000) && (N < 10000)){
		
		P1= pow(((N/100) + (N%100)), 2);
		
		if(N == P1){
			printf("Numero satisfaz a caracteristica");
		}
		else{
			printf("Numero nao satisfaz a caracteristica");
		}
	}
	else{
		printf("\nErro, numero fora do intervalo");
	}
	
	return 0;
}
