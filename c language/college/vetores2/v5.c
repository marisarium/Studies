#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){//n�o sei se o que ta errado � as strings/caracteres nao serem constantes ou outra coisa.

    char* pos, *lalala, *userC;
    
    printf("Digite uma palavra: \n");
    scanf("%s",lalala);
    
    printf("Qual caracter quer buscar?\n");
    scanf("%c", userC);
	
	pos = strrchr(lalala, userC);
	
	printf("A posicao onde aparece '%c' e: %s", userC, pos);
    	
    return 0;
}
/*Fa�a um programa que informe a posi��o de um dado caracter dentro de uma string
digitada pelo usu�rio.*/
