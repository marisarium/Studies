#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *arq;
	char linha[121];
	//r = read
	arq = fopen("novo.txt","rt");//pra abrir p�e o caminho completo de onde o arquivo se encontra
	
	if(arq == NULL){
		printf("ERRO: Nao foi possivel abrir o arquivo!");
	}else{
		//leitura de cada linha do arquivo
		
		while(fgets(linha, 121, arq) != NULL){//ler a linha desse arquivo e colocar na variavel linha que � string.
			printf("%s", linha);//se no momento da leitura retornar null ele para o la�o, se n�o ele continua lendo
		}
		fclose(arq);
	}	
	
	return 0;
}
