#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*Codifique uma instru��o para exibir valores l�gicos como true e false. 
	*Para o valor 0 deve aparecer false e para qualquer outro, true. Use o operador tern�rio.*/
	int num;
	
	printf("Programa dos valores logicos\n");
	printf("insira 0 ou qualquer coisa: ");
	scanf("%d", &num); 
	
	num== 0? printf("false"):printf("true");
	 
	
	return 0;
}
