#include <stdio.h>
#include <stdlib.h>

/*Aluna: Marisa Guimaraes Pereira,
Num matricula: 23288
Programacao Imperativa - turno Manha
Prof.Carlinhos
Facape
Data: 24/11/2020
Trabalho - Gabarito*/

int main(){
	int Q,i,j, linha=0;
	char *gabarito, *gabarito_aluno, c;//somente ABCDE
	FILE *arq_ent;
	FILE *arq_sai;
//-------------------------leitura de arquivo
	arq_ent = fopen("entrada.txt", "rt");
	
	if(arq_ent == NULL){
		printf("ERRO: Nao foi possivel efetuar a leitura do arquivo");
	}else{
		c = fgetc(arq_ent);	//quando c receber o caractere de pular linha, incrementa o contador
		while(c != EOF){//EOF = end of file, enquanto c for diferente do final do arquivo, falta caractere a ser lido, ele continua lendo um caractere de cada vez.
			if(c == '\n'){
				linha++;
			}
			printf("%c", c);
			c = fgetc(arq_ent);
		}
		printf("\n\n Quantidade de linhas do arquivo: %d", linha+1);//+1 porque linha conta apartir de zero
		fclose(arq_ent);
	}
//------------------------ outra coisa abaixo
	scanf("%d", &Q);//numero de questoes da prova. -PRIMEIRA LINHA
	if(Q<5 || Q>50){//verificando...
		scanf("%d", &Q);
	}

	//atribui o numero de questoes ao gabarito
	gabarito = (char*) malloc(Q*sizeof(int*));	//lembrar de no final tascar o free(gabarito[i]); usando for em cada um dos espacos do gabarito e free(gabarito); após o for.
	gabarito_aluno = (char*) malloc(Q*sizeof(int*));
	
	for(i=0;i<=Q;i++){//funciona
		scanf("%c", &gabarito[i]);//ler os caracteres(depois lembrar de pôr isso pra ler no arquivo)
	}
	
	return 0;
}

//fazer funcao ou estrutura pra leitura*****
	
/*	//fazer funcao ou estrutura para saida-gravar*****
	
	arq_sai = fopen("saida.txt", "at");//append - alterar
	
	if(arq_sai == NULL){
		printf("ERRO: Nao foi possivel alterar o arquivo de saida!");
	}else{
		fprintf(arq_sai, "Saida");
		printf("Operacao realizada com exito.\n");	
		
		fclose(arq_sai);	
	}*/
