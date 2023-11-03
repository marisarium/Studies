#include <stdio.h>
/*Autor: Marisa Guimarães Pereira - 2º Periodo - Manhã - FACAPE
Programação Estruturada - Prof. Carlinhos*/
int main(){
	int N, dig;
	printf("Digite um numero inteiro N: ");
	scanf("%d", &N);
	
	for(; N!=0; N/=10){
		
		dig = N %10;

		//depois por uma funcao pro 2000 sair 0002.
		printf("%d", dig);
	}
	
	return 0;
}
