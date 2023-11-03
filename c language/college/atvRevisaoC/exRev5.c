#include <stdio.h>

int main(){
	
	//tabela de conversao polegada para centimetro
	//conter valores de 1 a 100 polegadas
	//1 polegada é 2,54 cm
	int pol;
	float cm;
	
	printf("--Tabela de Conversao p->cm--\n");
	printf("So aceitamos valores entre 1 e 100.\n");
	printf("Digite o valor em polegadas: ");
	scanf("%d", &pol);
	
	while(pol>=1 && pol<=100){
		
		cm = (float)pol*2.54f;
	
		printf("%d polegadas correspondem a %.2f centimetros.\n", pol, cm);
		
		printf("Digite o valor em polegadas: ");
		scanf("%d", &pol);
	}
	printf("A tabela nao possui esse valor.");
	
	return 0;
}
