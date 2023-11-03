#include <stdio.h>
#include <stdlib.h>

int main(){
	char palavra[30];
	char vogais[] = {'a','e','i','o','u','A', 'E', 'I','O', 'U'};
	int i=0, j= 0, qtd=0;
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	while(i<10){
		for(j=0; j<30;j++){
			if(vogais[i] == palavra[j]){
				qtd ++;
			}
		}
		i++;	
	}
	
	printf("A quantidade de vogais que %s possui e: %d", palavra, qtd);

	//FAZER O MESMO ROLE DE LER CARACTERES DE UM ARQUIVO AQUI 
		
    return 0;
}
/*Faça um programa que leia uma palavra e imprima a quantidade de vogais que
compõe a palavra.*/
