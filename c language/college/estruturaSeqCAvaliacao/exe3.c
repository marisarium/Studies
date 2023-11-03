//autor: Marisa Guimarães Pereira
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	//programa da distancia entre dois pontos.
	float x1,x2,y1,y2, distancia;
	
	//recebe o ponto P1
	printf("Digite o x e o y do ponto P1 no plano cartesiano, respectivamente: \n");
	scanf("%f %f", &x1, &y1);
	
	//recebe o ponto P2
	printf("Digite o x e o y do ponto P2 no plano cartesiano, respectivamente: \n");
	scanf("%f %f", &x2, &y2);
	
	//calculo da distancia
	distancia = sqrt(pow((x2-x1),2) + pow((y2-y1), 2));
	
	printf("A distancia entre os pontos P1 e P2 e %0.2f", distancia);
		
	return 0;
}
