#include <stdio.h>
#include <stdlib.h>

int main(){
	int M[5][5], SL[5],SC[5],i,j, a=0;
	
	printf("Digite os valores da matriz 5x5: \n");
	
	for(i=0;i<5;i++){//leitura
		for(j=0;j<5;j++){
			printf("%dx%d: ",i+1,j+1);
			scanf("%d", &M[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		SL[i] = 0;
		SC[i] = 0;
	}
	
	for(i=0;i<5;i++){//somando linhas
		for(j=0;j<5;j++){
			SL[i] += M[i][j];
		}
	}
	
	while(a<5){
		for(i=0;i<5;i++){//somando colunas
			SC[a] += M[i][a];
		}
		a++;
	}
	
	printf("\nA matriz criada e: \n");
	
	for(i=0;i<5;i++){//escrita - matriz
		for(j=0;j<5;j++){
			printf("%dx%d: %d\n",i+1,j+1, M[i][j]);
		}
	}
	
	printf("\nO vetor da soma das linhas e: \n");
	printf("(");
	for(i=0;i<5;i++){//leitura - vetores
		printf("%d, ",SL[i]);
	}
	printf(")");
	
	printf("\nO vetor da soma das colunas e: \n");
	printf("(");
	for(i=0;i<5;i++){//leitura - vetores
		printf("%d, ",SC[i]);
	}
	printf(")");
	
	return 0;
}

/*Escrever um algoritmo que lê uma matriz M(5,5) contendo valores inteiros e cria 2 vetores SL(5), SC(5)
que contenham respectivamente as somas das linhas e das colunas de M. Escrever a matriz e os vetores
criados.*/
