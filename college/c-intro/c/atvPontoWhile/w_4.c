#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Autor: Marisa Guimaraes Pereira, Manha, 2 periodo,
Programacao estruturada, Ciencias da computacao, FACAPE*/

int main(){
	
	float D;//denominador
	int N;//numerador
	printf("Digite um numero de 1 a 10: ");
	scanf("%d", &N);
	
	for(; N<=10;N++){
		D = pow(N,2);
		//S = N/pow(N, 2);	calculo
		printf("%d/%.0f\n",N, D);//colocar separado para vizualização.
	}
		
	return 0;
}
