#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Autor: Marisa Guimaraes Pereira, Manha, 1 periodo,
Programacao estruturada, Ciencias da computacao, FACAPE*/

int main(){
	
	float D;//denominador
	int N, num;//numerador
	printf("Digite um numero de 1 a 10: ");
	scanf("%d", &num);
	
	for(N=num; N<=10;N++){
		D = pow(N,2);
		//S = N/pow(N, 2);	calculo
		printf("%d/%.0f\n",N, D);//colocar separado para vizualiza��o.
	}
	
	
	return 0;
}
