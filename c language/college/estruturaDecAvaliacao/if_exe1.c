#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Questao 1 - Marisa Guimaraes Pereira - Programação Imperativa - manha
	int opcao;
	float preco, pagar;
	printf("Qual o preco normal do produto? ");
	scanf("%f", &preco);
	
	printf("\nQual a opcao de pagamento?");
	
	printf("\n1 - A vista em dinheiro ou cheque, recebe 10 por cento de desconto");
	printf("\n2 - A vista no cartao de credito, recebe 15 por cento de desconto");
	printf("\n3 - Em duas vezes, preco normal de etiqueta sem juros");
	printf("\n4 - Em tres vezes, preco normal de etiqueta mais juros de 10 por cento");
	
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			//a vista no dinheiro ou cheque, 10% de desconto
			pagar = preco - preco*0.10;
			break;
		case 2:
			//a vista no cartao de credito. 15% de desconto
			pagar = preco - preco*0.15;
			break;
		case 3:
			//em 2x, preco normal. sem juros
			pagar = preco/2;
			break;
		case 4:
			//em 3x, preco normal + 10% de juros
			pagar = (preco/3) + preco*0.10;
			break;
		default:
			//preco normal
			pagar = preco;
			break;
	}
	
	printf("O valor a pagar e: %0.2f", pagar);
	
	return 0;
}
