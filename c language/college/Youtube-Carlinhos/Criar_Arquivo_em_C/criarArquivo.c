#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	
	arq = fopen("novo.txt","wt");//w = write
	
	if(arq == NULL){
		printf("ERRO: Nao foi possivel criar o arquivo!");
	}else{
		fprintf(arq, "Escrevendo meu primeiro arquivo de texto em linguagem C\n");
		fprintf(arq, "Escrevendo uma nova linha\n");
		//fprintf(arq, "LULILA LULILALULILA LALILA LULILA \n");
		printf("Arquivo foi criado com sucesso!");
		fclose(arq);
	}
	
	return 0;
}
