//autor: Marisa Guimarães Pereira
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	//programa de conversao dolar em real
	float VAL_REAL, VAL_DOLAR, COT;
	
	printf("Conversao de dolar para real 'no cofre de um hotel' \n");
	
	printf("Digite a quantidade de valores guardados no cofre: ");
	scanf("%f", &VAL_DOLAR);
	printf("Insira a cotacao do dolar de hoje: ");
	scanf("%f", &COT);
	
	//calculo de conversao
	VAL_REAL = VAL_DOLAR * COT;
	
	//saida em real
	printf("Voce tem R$ %0.2f guardados", VAL_REAL);
	
	return 0;
}
