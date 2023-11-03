#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Nome do aluno: Marisa Guimaraes Pereira, 23288, Ciências da Computação, manhã, 2º periodo, programação imperativa, Prof Carlinhos
struct palavras{//estrutura para armazenar as palvaras
	char letras[30];
};

int main(){
	struct palavras maior[10];
	int i,j, pos_maior=0, maaaior=0,tam_caracter[10];
	
	printf("Digite 10 palavras: \n");//LEMBRAR DE ALTERAR 3 = 10
	for(i=0;i<10;i++)//leitura de dados
		scanf("%s", maior[i].letras);
	
	
	for(i=0;i<10;i++)//verifica tamanho
		tam_caracter[i] = strlen(maior[i].letras);
	
	
	for(i=0;i<10;i++){//compara os tamanhos pra ver qual o maior
		for(j=0;j<10;j++){
			if(i==0 && j==0){
				if(tam_caracter[i]>tam_caracter[j]){
					maaaior = tam_caracter[i];
					pos_maior = i;
				}
				else if(tam_caracter[j]>tam_caracter[i]){
					maaaior = tam_caracter[j];
					pos_maior = j;
				}
				else if(tam_caracter[i]==tam_caracter[j]){
					if(i>j){
						maaaior = tam_caracter[i];
						pos_maior = i;
					}
					else if(i<j){
						maaaior = tam_caracter[j];
						pos_maior = j;
					}
				}
			}
			if(tam_caracter[i]>maaaior){
					maaaior = tam_caracter[i];
					pos_maior = i;
				}
				else if(tam_caracter[j]>maaaior){
					maaaior = tam_caracter[j];
					pos_maior = j;
				}
				else if(tam_caracter[i]==maaaior){
					if(i>pos_maior){
						maaaior = tam_caracter[i];
						pos_maior = i;
					}
				}else if(tam_caracter[j]==maaaior){
					if(j>pos_maior){
						maaaior = tam_caracter[j];
						pos_maior = j;
					}
				}
			}
		}
	
	printf("\nA maior palavra e: %s", maior[pos_maior].letras);//exibe a maior palavra
	return 0;
}
/*Construa um programa que leia dez palavras e coloque em um vetor. Em seguida, 
percorrer o vetor e informar qual a maior palavra (em quantidade de caracteres). 
Caso exista mais de um resultado, exibir a que tiver o maior índice. Por exemplo, 
no vetor [ “Ana”, “Maria”, “Jose”, “Joao”, “Mario”, “Fred” ], as maiores palavras 
são “Maria” (índice 1) e “Mario” (índice 4), ambos com 5 caracteres, mas deverá ser 
exibido somente “Mario”, pois o índice é maior.*/
