#include <stdio.h>
#include <stdlib.h>

#define MAX 20

struct alunos{//mais novo em idade ou da escola?
	char nome[30], endereco[60];
	int idade, dataInscri, dataCart;
};

int main(){
	struct alunos cadastro[MAX];
	int i, id=0, menor;
	printf("--Cadastro de Alunos da Autoescola--\n");
	printf("Insira os dados dos alunos: \n");
	
	for(i=0;i<MAX;i++){
		printf("\nAluno %d\n", i+1);
		
		printf("Nome: ");
		scanf("%s", cadastro[i].nome);
		printf("Idade: ");
		scanf("%d", &cadastro[i].idade);
		printf("Endereco: ");
		scanf("%s", cadastro[i].endereco);
		printf("Data de Inscricao: ");
		scanf("%d", &cadastro[i].dataInscri);
		printf("Data da Carteira: ");
		scanf("%d", &cadastro[i].dataCart);
	}
	
	for(i=0;i<MAX;i++){
		if(i==0){
			menor = cadastro[i].idade;
		}
		
		if(cadastro[i].idade < menor){
			menor = cadastro[i].idade;
			id = i;
		}
	}
	printf("\n--Filtro de idade dos alunos--\n");
	printf("\nO aluno mais novo e: \n");
	printf("Nome: %s\n", cadastro[id].nome);
	printf("Idade: %d\n", cadastro[id].idade);
	printf("Endereco: %s\n", cadastro[id].endereco);
	printf("Data de Inscricao: %d\n", cadastro[id].dataInscri);
	printf("Data da Carteira: %d\n", cadastro[id].dataCart);
	
	return 0;
}
