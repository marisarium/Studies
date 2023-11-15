#include <stdio.h>
#include <stdlib.h>

#define MAX 30

struct assalariado{
	char nome[50];
	char endereco[121];
	int telefone;
	char email[50];
	float salario;
};

int main(){
	struct assalariado info[MAX];
	
	char maiorSal[50];
	int i=0,j=0, fim=1, cont=0;
	float totalSal=0.0, maior=0.0;
	
	printf("--Programa de cadastro de assalariados--\n");	
	
	printf("Informe os dados abaixo:\n");
	
	while(i<MAX && fim != 0){//leitura e contador
		
		printf("Pessoa %d:\n", i+1);
		printf("Nome: ");
		scanf("%s", info[i].nome);
		printf("Endereco: ");
		scanf("%s", info[i].endereco);
		printf("Telefone: ");
		scanf("%d", &info[i].telefone);
		printf("Email: ");
		scanf("%s", info[i].email);
		printf("Salario: ");
		scanf("%f", &info[i].salario);
		
		cont++;
		printf("Digite '0' para finalizar e '1' para continuar...");
		scanf("%d", &fim);
		i++;
	}
	
	for(i=0;i<cont;i++){ //processamento
		totalSal += info[i].salario;
		
		if(i==0){
			maior = info[i].salario;
		}
		
		if(info[i].salario > maior){
			maior = info[i].salario;
			for(j=0;j<50;j++){
				maiorSal[j] = info[i].nome[j];
			}
		}
	}
	
	printf("\nO maior salario %.2f pertence a %s", maior,maiorSal);
		
	return 0;
}
