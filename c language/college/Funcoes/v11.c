#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float a, float b);

int main(){
	int A, B;
	printf("Informe os valores de A e B: ");
	scanf("%d %d", &A, &B);
	
	printf("A hipotenusa deste triangulo vale: %.2f", hipotenusa(A,B));
	return 0;
}

float hipotenusa(float a, float b){
	float hipo;
	hipo = sqrt(pow(a,2)+pow(b,2));
	
	return hipo;
}
/*11. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
. Faça uma função que receba os valores de a e b e calcule o

valor da hipotenusa através da equação.*/
