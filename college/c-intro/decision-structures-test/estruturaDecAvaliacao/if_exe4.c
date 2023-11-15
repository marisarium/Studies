#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Questao 4 - Marisa Guimaraes Pereira - Programação Imperativa - manha
	float A, B, C, R1, R2, Delta;
	
	printf("---Programa da equacao do segundo grau---\n");
	printf("Digite os valores de A, B e C, respectivamente: ");
	scanf("%f %f %f", &A, &B, &C);
	
	Delta = pow(A,2) - 4*A*C;
	
	if(Delta > 0){
		
		R1 = ((-B) + sqrt(Delta))/(2*A);//como conseguir o valor exato???, já tentei as funçoes de precisao ceil e floor e não dá
		R2 = ((-B) - sqrt(Delta))/(2*A);//tipo não da o valor exato após a virgula
		
		printf("As raizes reais e distintas sao: R1 = %0.2f e R2 = %0.2f", R1, R2);
	}
	else if(Delta == 0)
	{
		R1 = ((-B) + sqrt(Delta))/(2*A);
		printf("As raizes iguais sao: %0.2f", R1);
	}
	else{
		printf("A equacao nao possui raizes reais");
	}
	
	return 0;
}
