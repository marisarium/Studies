#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

int main(){
	
	/*Fa�a um programa que leia dois valores, o primeiro servindo de indicador de opera��o e o 
	*segundo correspondendo ao raio de uma circunfer�ncia. Caso o primeiro valor lido  seja igual a 1,
	*calcular e imprimir a �rea desta circunfer�ncia. Se o valor lido for 2, calcular e imprimir 
	*o per�metro da circunfer�ncia. E se o valor lido for diferente destes dois valores; 
	*imprimir uma mensagem dizendo queo indicador de opera��o � inv�lido.*/
	
	int indicador;
	float raio, area, perim;
	
	printf("Indique a operaca que deseja executar na circunferencia: (1-area, 2-perimetro) ");
	scanf("%d", &indicador);
	
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &raio);	
	
	switch (indicador){
		
		case 1:
			area = PI*sqrt(raio);
			printf("area da circunferencia: %.2f", area);
			break;
		
		case 2:
			perim = 2*PI*raio;
			printf("perimetro da circunferencia: %.2f", perim);		
			break;
	}
		
	
	return 0;
}
