#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*Numa faculdade, os alunos com m�dia maior ou igual a 7,0 s�o aprovados,  
	*aqueles com m�dia inferior a 3,0 s�o reprovados e os demais ficam para recupera��o.
	*Fa�a um programa que leia as duas notas de um aluno e informe sua situa��o. 
	*Use as cores azul, vermelho e amarelo para as mensagens aprovado, reprovado e recupera��o, respectivamente.*/
	float n1,n2,media;
	
	printf("Sistema de notas\n");
	
	printf("Digite a nota 1 e 2: ");
	scanf("%f %f", &n1, &n2);
	
	media = (n1+n2)/2;

	if(media >= 7.0){
		system("cls");
		system("color 01");
		printf("Aprovado");
	}
	else if(media < 3.0){
		system("cls");
		system("color 04");
		printf("Reprovado");	
	}
	else{
		system("cls");
		system("color 06");
		printf("Recuperacao");
	}	
	
	return 0;
}
