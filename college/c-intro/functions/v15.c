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
/*15. Crie uma fun��o que receba como par�metro um valor inteiro e gere como sa�da N
linhas com pontos de exclama��o, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!*/
