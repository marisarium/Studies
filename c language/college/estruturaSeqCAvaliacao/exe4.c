//autor: Marisa Guimarães Pereira
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Programa 'De quantos tijolos preciso?'

main(){
		
/*entrada: recebe dimensoes do tijolo(CT-comprimento e largura -LT)
*dimensoes da parede(comprimento - CP e largura - LP)
*saida: a quantidade de tijolos iguais necessarios para construir uma determinada parede (QTD)
*/
	float CT, LT, CP, LP, QTD;
	//recebimento chique dos dados
	printf("Programa 'De quantos tijolos preciso?' \n\n");
	printf("Quais sao as dimensoes do tijolo? \n");
	printf("Comprimento = ");
	scanf("%f", &CT);
	printf("Largura = ");
	scanf("%f", &LT);
	
	printf("Quais sao as dimensoes da parede? \n");
	printf("Comprimento = ");
	scanf("%f", &CP);
	printf("Largura = ");
	scanf("%f", &LP);
	
	//calculo: a area da parede dividida pela area do tijolo
	QTD = (CP*LP)/(CT*LT);
	
	//saida
	printf("A quantidade de tijolos necessarios para essa parede e: %0.0f", QTD);	
	
	return 0;
}
