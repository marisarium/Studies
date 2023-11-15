#include <stdio.h>
#include <stdlib.h>

struct carro{
	char marca[30];
	char modelo[30];
	int ano;
	float preco;
	char cor[30];
};

int main(){
	int i;
	
	struct carro carrinho[4];//eu deveria fazer isso como matriz?
	
	printf("--Programa de revendedora de carros--\n");
	printf("Registro de carros: \n");
	
	for(i=0;i<4;i++){//leitura
		printf("Carro %d: \n", i+1);
		
		printf("Informe o nome da marca: ");
		scanf("%s", &carrinho[i].marca);
		printf("Informe o nome do modelo: ");
		scanf("%s", &carrinho[i].modelo);
		printf("Informe o nome do ano: ");
		scanf("%d", &carrinho[i].ano);
		printf("Informe o preco: ");
		scanf("%f", &carrinho[i].preco);
		printf("Informe a cor: ");
		scanf("%s", &carrinho[i].cor);
	}
	
	for(i=0;i<4;i++){//saida
		printf("\nCarro %d: \n", i+1);
		
		printf("Marca: %s\n", carrinho[i].marca);
		printf("Modelo: %s\n", carrinho[i].modelo);
		printf("Ano: %d\n", carrinho[i].ano);
		printf("Preco: %.2f\n", carrinho[i].preco);
		printf("Cor: %s\n", carrinho[i].cor);
	}
	
	return 0;
}
