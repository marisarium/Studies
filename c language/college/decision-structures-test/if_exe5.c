#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Questao 5 - Marisa Guimaraes Pereira - Programação Imperativa - manha
	float A, B, premio, premioA, premioB;
	
	printf("--Participacao na Loteria--\n");
	printf("Digite a quantia do amigo A e B, respectivamente: ");
	scanf("%f %f", &A, &B);
	
	printf("Qual o valor do premio? ");
	scanf("%f", &premio);
	
	premioA = (A/(A+B)) * premio;
	premioB = (B/(A+B)) * premio;
	
	printf("O amigo A vai receber R$ %0.2f", premioA);
	printf("\nO amigo B vai receber R$ %0.2f", premioB);
	return 0;
}
