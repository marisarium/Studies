#include <stdio.h>
#include <stdlib.h>

//Nome do aluno: Marisa Guimaraes Pereira, 23288, Ciências da Computação, manhã, 2º periodo, programação imperativa, Prof Carlinhos
int main(){
	int N,i;
	float *vetor, soma=0.0, media;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &N);
	
	vetor = (float*) malloc(N* sizeof(float));
	
	printf("Digite os valores do vetor: \n");
	for(i=0;i<N;i++){
		printf("Valor %d: ", i);
		scanf("%f", &vetor[i]);
		soma += vetor[i];
	}
	
	media = soma/N;
	
	printf("\nA media aritmetica dos valores lidos e: %.2f", media);
	free(vetor);
	return 0;
}
/*Escreva um programa que leia um valor inteiro digitado pelo usuário (N).
 Em seguida, aloque dinamicamente um vetor para armazenar N valores do tipo float.
 Faça a leitura dos valores e em seguida exiba na tela a média aritmética dos valores lidos.*/
