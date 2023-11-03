#include <stdio.h>
#include <stdlib.h>

int main(){
	int val[5][6], par[30], i,j, a=0,quantPar=0;
	float media=0.0,soma=0.0;
		
	printf("Digite os valores da matriz 5x6: \n");
	
	for(i=0;i<5;i++){//leitura 
		for(j=0;j<6;j++){
			printf("%d x %d: ", i+1,j+1);
			scanf("%d", &val[i][j]);
			
			if(val[i][j]%2 == 0){
				quantPar ++;
				soma = soma + val[i][j];
				par[a] = val[i][j];
				a++;
			}
		}
	}
		
	media = soma/quantPar;
	printf("A media dos valores pares e %.2f", media);
	
	printf("\nOs valores pares da matriz 5x6 sao: \n");
	printf("{");
	for(i=0;i<a;i++){
		printf("%d, ", par[i]);
	}
	printf("}");
	
	return 0;
}

/*Escrever um algoritmo para armazenar valores inteiros em uma matriz (5,6). A seguir, calcular
a média dos valores pares contidos na matriz e escrever seu conteúdo.*/
