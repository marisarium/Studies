/*OBESO.C - informa se uma pessoa está ou não obesa */

#include <stdio.h>
#include <math.h>

#define LIMITE 30

main()
{
	float peso, altura, imc;
	
	printf("\n Qual o seu peso e altura? ");
	scanf("%f %f", &peso, &altura);
	
	imc = peso/pow(altura, 2);
	
	printf("\n Seu imc e %.1f", imc);
	
	if(imc <= LIMITE)printf ("\n voce nao esta obeso!");
	else			printf ("\n voce esta obeso!");
	
}
