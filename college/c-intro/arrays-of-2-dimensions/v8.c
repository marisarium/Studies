#include <stdio.h>
#include <stdlib.h>

int main(){
	int M[4][4],i,j, vetor[4], sequestro[4], aux=0;
	
	printf("Insira os valores da matriz 4x4: \n");
	
	for(i=0;i<4;i++){//leitura e segunda coluna 
		for(j=0;j<4;j++){
			printf("%dx%d: ",i,j);
			scanf("%d", &M[i][j]);
			
			if(j==1){
				sequestro[i] = M[i][j];
			}
		}
	}
	
	for(i=3;i>=0;i--){//inverso da segunda coluna
		vetor[aux] = sequestro[i];
		aux++;
	}
	
	printf("Os valores do vetor de 4 dimensao, inverso e capturado, coluna 2 e: \n");
	for(i=0;i<4;i++){//leitura
		printf(" %d ", vetor[i]);
	}
	return 0;
}

/*Faça um algoritmo capaz de preencher uma matriz 4 x 4 de inteiros. Capturar a coluna 2, inverter e
guardar seus valores em um vetor de dimensão 4.

MAT 
5 1 3 2    Coluna 2 1 0 2 3
2 0 8 3
1 2 4 9    VETOR 3 2 0 1
6 3 6 1   */
