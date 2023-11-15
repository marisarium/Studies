#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Autor: Marisa Guimaraes Pereira, Manha, 1 periodo,
Programacao estruturada, Ciencias da computacao, FACAPE*/

int main(){//aonde eu coloco as estruturas de repetição aqui? for? while? nao tinha especificando na questao, inventei um aqui.
	float comp, larg, alt, area, cxs;
	int i=1;
	printf("--Programa de revestimento de parede--");
	while(i != 0){
		printf("Digite as dimesoes de uma cozinha retangular: \n");
		printf("(Comprimento, largura e altura, respectivamente, separados por espaço)\n");
		scanf("%f %f %f", &comp, &larg, &alt);
		//calcular a area
	
		area = comp*larg*alt;
	
		cxs = area/1.5f;
	
		printf("O numero de caixas de revestimento necessarias e: %.2f", cxs);
		printf("\nSe quiser reiniciar o programa digite 0");
		scanf("%d", &i);
	}
	return 0;
}
