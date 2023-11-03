#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[5][5], B[5][5], C[5][5],i,j;
	
	printf("Digite os valores da matriz A(5x5):\n");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d x %d: ", i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Digite os valores da matriz B(5x5):\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d x %d: ", i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("A soma das matrizes A(5x5) + B(5x5) = C(5x5):\n");
	printf("{");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			C[i][j] = A[i][j] + B[i][j];
			printf("%d, ",C[i][j]);
		}
	}
	printf("}");
	
	return 0;
}

/*Ler uma matriz B de mesma dimensão que A (Dimensão: 5X5). Efetuar a soma matricial A + B e
armazenar o resultado na matriz C.*/
