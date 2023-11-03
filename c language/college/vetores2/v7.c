#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){//nota pra marisa: bixa tu se lembre dessa lógica.
	char frase[100];
	char palavra[24];
	int i,j, tam_frase, tam_palavra, la=0, controle=0, cont=0;//não sabia que nome da pra lá então vai lá mesmo
	
	puts("Digite uma frase: ");
	gets(frase);
	puts("Digite uma palavra: ");
	gets(palavra);
	
	tam_palavra = strlen(palavra);
	tam_frase = strlen(frase);
	
	for(i=0; i<tam_frase; i++){
			
		if(palavra[0] == frase[i]){
			
			la = i;
			controle=0;
			
			for(j=0;j<tam_palavra;j++){
				
				if(palavra[j] == frase[la]){
					controle++;
				}
				la++;
			}
			
			if(controle>=tam_palavra){
				cont++;
			}	
		}
	}
	
	printf("\nA palavra %s ocorre na frase %s: %d vezes", palavra, frase, cont);
	
	//verificar se a junção de caracteres da palavra ocorre na junção de caracteres e espaços frase.
	
	return 0;	
}
/*Dadas duas strings (um contendo uma frase e outro contendo uma palavra), determine
o número de vezes que a palavra ocorre na frase.
Exemplo:
Para a palavra ANA e a frase:

ANA E MARIANA GOSTAM DE BANANA
Temos que a palavra ocorre 4 vezes na frase.*/
