#include <stdio.h>
#include <stdlib.h>

int main(){
	/*Fa�a  um  programa  que  leia uma  vari�vel  contendo  o  n�mero  de  erros 
	*detectados num certo  processo.  Codifique  uma  instru��o, usando  o  operador  
	*tern�rio,  capaz  de  exibir sa�das como:1 erro detectado.5 erros detectados.*/
	
	int numErros;
	
	printf("Indique o numero de erros no processo: ");
	scanf("%d", numErros);
	
	numErros>=1 ? printf("%d erros detectados", numErros):printf("%d erro detectado", numErros);
	
	return 0;
}
