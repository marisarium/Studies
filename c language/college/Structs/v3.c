#include <stdio.h>
#include <stdlib.h>

struct cliente{
	char nome[50];
	char endereco[121];
	int telefone;
};

int main(){
	int i=0, cont=0,n=1;
	
	struct cliente info[50];
	
	printf("--Programa de cadastro de clientes--\n");
	printf("Informe os seguintes valores do cliente: \n");

	while(i<50 && n!=0){
		printf("\nCliente %d: \n", i+1);
		
		printf("Nome: ");
		scanf("%s",info[i].nome);
		
		printf("Endereco: ");
		scanf("%s",info[i].endereco);
		
		printf("Telefone: ");
		scanf("%d", &info[i].telefone);
		
		cont++;
		i++;
		
		printf("\nDigite '0' para sair e '1' para continuar o cadastro...");
		scanf("%d", &n);
	}
	
	printf("\n %d clientes foram registrados.", cont);
	printf("\nSeus cadastros sao: \n");
	
	for(i=0;i<cont;i++){//saida
		printf("\nCliente %d: \n", i+1);
		
		printf("Nome: %s\n", info[i].nome);
		printf("Endereco: %s\n", info[i].endereco);
		printf("Telefone: %d\n", info[i].telefone);
	}
	return 0;
}
