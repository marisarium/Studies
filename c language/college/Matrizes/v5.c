#include <stdio.h>
#include <stdlib.h>

int main(){
	int MAT[5][4], VETOR[4],a=0,i,j;
	
	printf("Insira os valores da matriz 5x4: \n");
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%dx%d: ", i+1,j+1);
			scanf("%d", &MAT[i][j]);
			
			if(i==3){
				VETOR[a] = MAT[i][j];
				a++;
			}
		}
	}
	
	printf("O vetor de dimensao 4 e: ");
	printf("(");
	for(i=0;i<4;i++){
		printf("%d ", VETOR[i]);
	}
	printf(")");
	
	return 0;
}

/*Faça um algoritmo capaz de preencher uma matriz 5 x 4 de inteiros. Capturar a linha 4 e guardar seus
valores em um vetor de dimensão 4.

MAT 
5 1 3 2  Linha 4 (6 3 6 1)
2 0 8 3
1 2 4 9  VETOR (6 3 6 1)
6 3 6 1
3 8 0 2*/
