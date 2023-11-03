#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Questao 2 - Marisa Guimaraes Pereira - Programação Imperativa - manha
	int dia, mes, ano, P1, P2, P3;//P = parte do calculo.
	
	printf("Digite sua data de nascimento:(assim: 01 02 1995)\n");
	scanf("%d %d %d", &dia, &mes, &ano);
	
	P1 = ((dia*100)+mes) + ano;//junta manipulando os zeros
	P2 = P1/100 + P1%100;//o inverso de acima
	P3 = P2 % 5;//resultado
	
	switch (P3){
		case 0:
			printf("Timido");
			break;
		case 1:
			printf("Sonhador");
			break;
		case 2:
			printf("Paquerador");
			break;
		case 3:
			printf("Atraente");
			break;
		case 4:
			printf("Irresistivel");
			break;
		default:
			printf("o zodiaco nao lhe compreende.");
			break;
	}
	
	return 0;
}
