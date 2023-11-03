#include <stdio.h>
#include <stdlib.h>

void linhasExclamam(int N);

int main(){
	int N;
	printf("Digite um numero inteiro: ");
	scanf("%d", &N);
	
	linhasExclamam(N);
	return 0;
}

void linhasExclamam(int N){
	int i;
	for(i=0;i<N;i++){
		if(i>0){
			//printf
		}else if(i==0){
			printf("!");
		}
		
		printf("\n");
	}
}
/*15. Crie uma função que receba como parâmetro um valor inteiro e gere como saída N
linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!*/
