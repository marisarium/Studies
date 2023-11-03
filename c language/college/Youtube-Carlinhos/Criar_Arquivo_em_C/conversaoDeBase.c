#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, base;
	char resultado[30];
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("Deseja converter para qual base? ");
	scanf("%d", &base);
	itoa(n, resultado, base);//int to string, 2 = binário, 8 = octal, 16 = hexadecimal, 10 = decimal
	//pra usar essa funcao, por a biblioteca stdlib
	printf("%s", resultado);
	
	return 0;
}
