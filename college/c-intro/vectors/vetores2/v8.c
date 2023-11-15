#include <stdio.h>
#include <stdlib.h>

int main(){
	char Str[100];
	int pos;
	printf("Informe uma palavra ou texto:\n");
	gets(Str);
	printf("\nInforme a posicao do caractere a ser removido: ");
	scanf("%d", &pos);
	
	Str[pos] = ' ';	
	printf("O caractere da posicao %d foi retirado\n", pos);
	printf("Agora o texto esta assim: \n");
	puts(Str);

	return 0;	
}
/*Faça um programa que remova um caracter de uma string do tipo char Str[100], dada
a posição do caracter.*/
