#include <stdio.h>
#include <stdlib.h>

float potencia(float base, int exp){
	int i;
	float pot=1.0;
	
	for(i=0;i<exp;i++){
		pot *= base;
	}
	
	if(exp == 0){
		pot = 1.0;
	}
	return pot;
}


int main(){
	float b, pot;
	int ex;
	printf("Qual a base: ");
	scanf("%f", &b);
	printf("Qual o expoente: ");
	scanf("%d", &ex);
	
	pot = potencia(b,ex);
	
	printf("A potencia de %.2f elevado a %d e: %.2f", b,ex,pot);
	return 0;
}
/*6. Faça uma função que calcule a potencia de um número. Crie um programa que leia
a base e o expoente, e utilize a função para mostrar o resultado.*/
