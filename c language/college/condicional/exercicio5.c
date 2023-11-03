#include <stdio.h>
#include <stdlib.h>

int main(){
	/*Faça  um  programa  que  leia uma  variável  contendo  o  número  de  erros 
	*detectados num certo  processo.  Codifique  uma  instrução, usando  o  operador  
	*ternário,  capaz  de  exibir saídas como:1 erro detectado.5 erros detectados.*/
	
	int numErros;
	
	printf("Indique o numero de erros no processo: ");
	scanf("%d", numErros);
	
	numErros>=1 ? printf("%d erros detectados", numErros):printf("%d erro detectado", numErros);
	
	return 0;
}
