#include <stdio.h>
#include <stdlib.h>

int main(){
	int M[5][4],i,j;
	float soma=0.0, media[5];
	
	printf("Insira os valores da matriz: \n");
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%dx%d: ", i,j);
			scanf("%d", &M[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			soma += M[i][j];
		}
		media[i] = soma/4.0; 
		soma = 0.0;
	}
	
	printf("\nResultado das medias de linhas da matriz: \n");

	for(i=0;i<5;i++){
		printf("%.2f\n", media[i]);
	}
	
	return 0;
}

/*Faça um programa capaz de alimentar uma matriz 5 x 4 de números, após o preenchimento verifique a
média dos valores digitados por linha e exiba na tela.

Matriz X Resultado

5 1 3 2    2.75
1 2 4 9    4.00
6 3 6 1    4.00
3 8 0 2    3.25
0 1 0 2    0.75*/
