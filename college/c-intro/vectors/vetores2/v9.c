#include <stdio.h>
#include <stdlib.h>

int main(){
	char Str[100];
	char cha[2];
	int pos;
	
	printf("Informe uma palavra ou texto:\n");
	gets(Str);
	printf("\nInforme a posicao do caractere a ser adicionado: ");
	scanf("%d", &pos);
	printf("\nInforme o caracter a ser adicionado: ");
	scanf("%s", cha);
		
	Str[pos] = cha[0];	
	printf("\nO caractere da posicao %d foi retirado", pos);
	printf("\nAgora o texto esta assim: \n");
	puts(Str);

	return 0;	
}
/*Faça um programa que insira um caracter em uma string do tipo char Str[100], dada
a posição do caracter.*/
