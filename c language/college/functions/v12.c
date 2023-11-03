#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volCilin(float alt, float raio);

int main(){
	float altura, raio;
	
	printf("Informe a altura do cilindro: ");
	scanf("%f", &altura);
	printf("Informe o raio do cilindro: ");
	scanf("%f", &raio);
	
	printf("O volume do cilindro e: %.2f", volCilin(altura,raio));
	return 0;
}

float volCilin(float alt, float raio){
	float volume;
	const PI = 3.141592;
	volume = PI*pow(raio,2)*alt;
	
	return volume;
}
/*12. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o
volume do cilindro. O volume de um cilindro circular é calculado por meio da
seguinte fórmula: */
