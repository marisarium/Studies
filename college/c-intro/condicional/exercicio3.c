#include <stdio.h>

int main(){
	
	/*Uma  empresa  determinou  um  reajuste  salarial  de  5%  a  todosos  seus  funcion�rios.  
	*Al�m disso, concedeu um abono de R$ 300,00 para aquelesque recebem at� R$ 1.500,00.
	*Dado o valor do sal�rio de um funcion�rio,informar para quanto ele ser� reajustado.*/
	
	float sal, novoSal;
	const float abono = 300.00;
	
	printf("Informe o salario atual: ");
	scanf("%f", &sal);
	
	novoSal= sal*1.05;
	
	if (novoSal<= 1500.00){
		
		novoSal+= abono;
	} 
	
	printf("O novo salario e: %0.2f", novoSal);
	
	return 0;
}
