#include <stdio.h>
#include <stdlib.h>

//Nome do aluno: Marisa Guimaraes Pereira, 23288, Ci�ncias da Computa��o, manh�, 2� periodo, programa��o imperativa, Prof Carlinhos
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
/*Escreva um programa que leia um valor inteiro digitado pelo usu�rio (N).
 Em seguida, aloque dinamicamente um vetor para armazenar N valores do tipo float.
 Fa�a a leitura dos valores e em seguida exiba na tela a m�dia aritm�tica dos valores lidos.*/
