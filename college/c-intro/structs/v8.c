#include <stdio.h>
#include <stdlib.h>

struct funcionario{
	char nome[30], endereco[60];
	float salario;
};
int main(){
	struct funcionario pessoa[20];
	int i,id=0;
	float maior=0.0;
	
	printf("--Cadastro de Funcionarios--\n");
	printf("Insira os dados abaixo: \n");
	
	for(i=0;i<20;i++){
		printf("\nFuncionario %d\n", i+1);
		
		printf("Nome: ");
		scanf("%s", pessoa[i].nome);
		printf("Endereco: ");
		scanf("%s", pessoa[i].endereco);
		printf("Salario: ");
		scanf("%f", &pessoa[i].salario);
	}
	
	for(i=0;i<20;i++){
		if(i==0){
			maior = pessoa[i].salario;
		}
		
		if(pessoa[i].salario>maior){
			maior = pessoa[i].salario;
			id=i;
		}
	}
	
	printf("\nO maior salario e: %.2f", maior);
	printf("\nE pertence a %s", pessoa[id].nome);
	
	return 0;
}
