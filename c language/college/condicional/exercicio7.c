#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*Numa faculdade, os alunos com média maior ou igual a 7,0 são aprovados,  
	*aqueles com média inferior a 3,0 são reprovados e os demais ficam para recuperação.
	*Faça um programa que leia as duas notas de um aluno e informe sua situação. 
	*Use as cores azul, vermelho e amarelo para as mensagens aprovado, reprovado e recuperação, respectivamente.*/
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
