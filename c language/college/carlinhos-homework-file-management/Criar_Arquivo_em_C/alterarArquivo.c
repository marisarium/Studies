#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	
	arq = fopen("novo.txt", "at");//a - append
	
	if(arq == NULL){
		printf("ERRO: Nao foi possivel abrir o arquivo");
	}else{
		fprintf(arq, "\nAdicionando nova linha ao arquivo\n");
		fprintf(arq, "Mais uma linha adicionada\n");
		fprintf(arq, "Manteiga na manteiga!!!");
		printf("Operacao realizada com sucesso!");
		
		fclose(arq);
	}
	
	return 0;
}
