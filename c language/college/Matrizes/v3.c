#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[5][5],i,j,soma=0;
	
	printf("Digite os elementos da matriz 5x5: \n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d x %d = ", i+1,j+1);
			scanf("%d", &matriz[i][j]);
			
			if(i==j){
				soma += matriz[i][j];
			}
		}
	}
	
	printf("A soma da diagonal principal e: %d", soma);
	
	return 0;
}

/*Escreva um algoritmo que lê uma matriz M(5,5) e calcula a soma da diagonal principal.*/
