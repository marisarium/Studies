#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*Dados  os  coeficientes  (a?0,  b  e  c)  de  uma  equa��o  do  2�grau,
	*calcule  e  informe  suas ra�zes reais, usando a f�rmula de B�skara.*/
	
	double a,b,c, r1,r2, delta;
	
	printf("Informe os coeficientes a, b e c, respectivamente:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	 
	delta = pow(b,2) - 4*a*c;
	   
	r1 = ((b*-1) - sqrt(delta))/(a*2);
	r2 = ((-1*b)+sqrt(delta))/(a*2);//WTF????
	
	printf("A raiz 1 e %lf e a raiz 2 e %lf", r1, r2);
	
	return 0;
}
