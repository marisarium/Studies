#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	/*Fa�a um programa em C que calcule o aumento de sal�rio para o corrente ano. 
	*Se o sal�rio for maior que R$ 1.000 o aumento � de 5%. Sen�o o aumento � de 7%.*/
	
	float aumSal, sal, aum;
	
	printf("Digite o seu salario: ");
	scanf("%f", &sal);
	
	if(sal > 1000.00){
		aum = sal*0.05;
	}
	else{
			aum = sal*0.07;
	}
	
	aumSal = sal + aum;
	
	printf("O salario do ano corrente e %.2f", aumSal);
	return 0;
}
