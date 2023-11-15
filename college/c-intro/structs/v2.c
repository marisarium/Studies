#include <stdio.h>
#include <stdlib.h>

struct cliente{
	char nome[50];
	char endereco[121];
	int telefone;
};

int main(){
	int i;
	
	struct cliente info[2];
	
	printf("--Programa de cadastro de clientes--\n");
	
	printf("Informe os seguintes valores do cliente: \n");
	for(i=0;i<2;i++){//leitura - POR QUE QUE DA SEGUNDA VEZ ELE BUGA SE COLOCAR GETS AO INVÉS DE SCANF?? 
		printf("\nCliente %d: \n", i+1);
		
		printf("Nome: ");
		scanf("%s",info[i].nome);
		
		printf("Endereco: ");
		scanf("%s",info[i].endereco);
		
		printf("Telefone: ");
		scanf("%d", &info[i].telefone);
	}
	
	printf("\nO resultado das informacoes registradas foram: \n");
	for(i=0;i<2;i++){//saida
		printf("\nO nome do cliente %d e: %s\n",i+1, info[i].nome);
		printf("O endereco do cliente %d e: %s\n",i+1, info[i].endereco);
		printf("O telefone do cliente %d e: %d\n",i+1, info[i].telefone);
	}
	
	return 0;
}
