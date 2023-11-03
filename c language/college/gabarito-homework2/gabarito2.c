#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Aluna: Marisa Guimaraes Pereira,
Num matricula: 23288
Programacao Imperativa - turno Manha
Prof.Carlinhos
Facape
Data: 24/11/2020
Trabalho - Gabarito
nota: comentei tudo pra facilitar o entendimento, acho que nunca fiquei tao orgulhosa com um codigo T-T*/

int main(){
//--------------GLOSSARIO------------------------------
	//char: gabarito=gabarito dos alunos, gab_oficial = gabarito oficial, id[4]=armazena caracteres que vao ate o numero maximo de alunos: 1000, por isso o 4, de 4 digitos, que posteriormente foram convertidos pra um numero inteiro. A mesma lógica tá pra quantidade de alunos, e "c"é o caractere de leitura do arquivo de entrada
	char gabarito[1000][50],gab_oficial[50], id[4], quant_alunos[4], c;
	//int: i, j, z, linha e primeiro são variaveis auxiliares para serem usadas em estruturas de repeticao for, vetores, matrizes e como contadores. Tam_gab_of = é o tamanho do gabarito oficial para que ele seja armazenado num vetor char separadamente, alunos recebe a conversao de num_alunos de char pra int,  id_Al e acertos recebem, respectivamente, as ids de cada aluno e os acertos nas questoes.
	int i=0, j=0,z=0,linha=0, primeiro=0, tam_gab_of=0, alunos=0, Q, id_Al[1000], acertos[50];
	
	//instâncias de arquivo.
	FILE *arq_ent;
	FILE *arq_sai;	
//----------------ENTRADA-------------------------
	arq_ent = fopen("entrada.txt", "rt");//abre o arquivo e lê.
	
	if(arq_ent == NULL){//teste de erro.
		printf("ERRO: Nao foi possivel efetuar a leitura do arquivo");
	}else{
		c = fgetc(arq_ent);//busca o primeiro caractere do arquivo.
		Q = (c-'0');//converte o caractere C pra inteiro.
		
		while(c != EOF){//verifica se acabou o arquivo
			if(c == '\n'){//verifica se acabou a linha
				linha++;//controle
				primeiro=0;
				z=0;
			}
			
			c = fgetc(arq_ent);//pega os role dos caracteres das linhas.
			
			if(linha==1){//linha 1.
				gab_oficial[tam_gab_of] = c;//captura o gabarito oficial em caractere.
				tam_gab_of++;
			}else if(linha==2){//na linha 2.
				quant_alunos[i] = c;//captura a quantidade de alunos.
				i++;
				alunos = atoi(quant_alunos);//converte pra inteiro a quantidade de alunos.
			}else if(linha>=3){//apartir da linha 3.
				if(primeiro==0){
					id[j] = c;//captura o id em caractere.
					j++;
					primeiro++;//verifica se pulou de linha pra buscar o id.
				}else{
					gabarito[linha-3][z]=c;//atribui os valores do gabarito dos alunos a uma variavel.
					z++;
				}
			}
		}
		fclose(arq_ent);//fecha arquivo
	}
//----------PROCESSO-------------------------------------------------------
	
	id_Al[0] = atoi(id);	//convertendo a id do aluno pra inteiro.
	for(i=alunos-1;i>0;i--){
		acertos[i]=0;//atribuindo valor aos acertos.
		id_Al[i] = id_Al[0]%10;//invertendo o vetor de id do aluno.
		id_Al[0] /= 10;
	}

	z=0;
	for(i=0;i<alunos;i++){//Calculo de acertos.
		for(j=1;j<=Q;j++){
			if(gabarito[i][j]==gab_oficial[z]){
				acertos[i]++;
			}
			z++;
		}
		z = 0;
	}
//-----------SAIDA-----------------------------------------------------------	
	arq_sai = fopen("saida.txt", "at");//abre o arquivo e altera.
	
	if(arq_sai == NULL){
		printf("ERRO: Nao foi possivel alterar o arquivo de saida!");//teste de erro
	}else{
		for(i=0;i<alunos;i++){
			fprintf(arq_sai, "%d %d\n", id_Al[i], acertos[i]);//Saída de id de alunos e acertos na prova.
		}
		printf("\nOperacao realizada com exito.\n");	
		
		fclose(arq_sai);//fecha arquivo
	}
	
	return 0;
}
