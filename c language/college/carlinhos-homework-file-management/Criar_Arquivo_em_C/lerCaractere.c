#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char c;
	//saber quantas linhas tem esse arquivo? contador
	int linha = 0;
	//como saber que pulou de linha?
	arq = fopen("novo.txt", "rt");
	
	if(arq == NULL){
		printf("ERRO: Nao foi possivel efetuar a leitura do arquivo");
	}else{
		c = fgetc(arq);	//quando c receber o caractere de pular linha, incrementa o contador
		while(c != EOF){//EOF = end of file, enquanto c for diferente do final do arquivo, falta caractere a ser lido, ele continua lendo um caractere de cada vez.
			if(c == '\n'){
				linha++;
			}
			printf("%c", c);
			c = fgetc(arq);
		}
		printf("\n\n Quantidade de linhas do arquivo: %d", linha+1);//+1 porque linha conta apartir de zero
		fclose(arq);
	}
	return 0;
}
