#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*Codifique uma instrução para exibir valores lógicos como true e false. 
	*Para o valor 0 deve aparecer false e para qualquer outro, true. Use o operador ternário.*/
	int num;
	
	printf("Programa dos valores logicos\n");
	printf("insira 0 ou qualquer coisa: ");
	scanf("%d", &num); 
	
	num== 0? printf("false"):printf("true");
	 
	
	return 0;
}
