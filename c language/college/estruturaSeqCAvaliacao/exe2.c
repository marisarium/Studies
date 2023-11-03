//autor: Marisa Guimarães Pereira
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	//programa de troca de variaveis
	int A,B, troca;
	//recebe A e B
	printf("Digite os valores inteiros de A e B, respectivamente \n");
	scanf("%d %d", &A, &B);
	
	//troca os valores entre as variaveis A <- B e B <- A
	troca = A;
	A = B;
	B = troca;
	
	//exibir A e B
	printf("valor de A: %d \nvalor de B: %d",A,B);
	
	return 0;
}
