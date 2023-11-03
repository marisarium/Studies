#include <stdio.h>
#include <stdlib.h>

int main(){
	//as siglas das variaveis estao explicadas nos comentarios abaixo, no final
	int M[5][5],i,j,DP=0, DS=0, L4=0, C2=0, TUDO =0;
	
	printf("Digite os elementos da matriz 5x5: \n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d x %d = ", i+1,j+1);
			scanf("%d", &M[i][j]);//leitura
			
			if(i==3){//linha 4
				L4 += M[i][j];
			}
			
			if(j==1){//coluna 2
				C2 += M[i][j];
			}
			
			if(i==j){//diagonal principal
				DP += M[i][j];
			}
			
			if(i+j == 4){//diagonal secundaria - 4 e a ordem da matriz comecando em 0
				DS += M[i][j];
			}
			
			TUDO += M[i][j];//tudo
		}
	}
	
	printf("\nA soma da linha 4 de M: %d\n", L4);
	printf("A soma da coluna 2 de M: %d\n", C2);
	printf("A soma da diagonal principal e: %d\n", DP);
	printf("A soma da diagonal secundaria e: %d\n", DS);
	printf("A soma de todos os elementos da matriz e: %d\n", TUDO);
	
	printf("\nA matriz 5x5 e: \n");
	
	for(i=0;i<5;i++){//mostrar matriz
		for(j=0;j<5;j++){
			printf("%dx%d: %d\n", i,j,M[i][j]);
		}
	}
	return 0;
}

/*Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:

a) da linha 4 de M.(L4)
b) da coluna 2 de M.(C2)
c) da diagonal principal.(DP)
d) da diagonal secundária.(DS)
e) de todos os elementos da matriz.(TUDO)
f) Escreva estas somas e a matriz.(M)*/
