#include <stdio.h>
#include <stdlib.h>

int checkParImp(int valor);

int main(){
	int val, parimp;
	printf("Digite um valor: ");
	scanf("%d", &val);
	
	parimp = checkParImp(val);
	
	if(parimp==1)
		printf("Valor e par");
	else if(parimp==0)
		printf("Valor e impar");
		
	return 0;
}

int checkParImp(int valor){
	if(valor%2==0)
		return 1;
	else
		return 0;
}
/*5. Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � par ou �mpar.
Sendo que o valor de retorno ser� 1 se o n�mero for par, e 0 caso contr�rio.*/
