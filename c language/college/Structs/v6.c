#include <stdio.h>
#include <stdlib.h>

struct alunos{
	char nome[30];
	int num;//numero
	float N1, N2;//nota 1 e 2
};

int main(){
	struct alunos guri[100];
	int i,id=0;
	float media[100], maior=0.0;
	
	printf("--Cadastro de Alunos--\n");
	printf("Informe os dados abaixo: \n");
	
	for(i=0;i<100;i++){
		printf("\nAluno %d\n", i+1);
		
		printf("Nome: ");
		scanf("%s", guri[i].nome);
		printf("Numero: ");
		scanf("%d", &guri[i].num);
		printf("Nota 1: ");
		scanf("%f", &guri[i].N1);
		printf("Nota 2: ");
		scanf("%f", &guri[i].N2);
		
		media[i] = (guri[i].N1 + guri[i].N2)/2.0;
	}
	
	for(i=0;i<100;i++){
		if(i==0){
			maior = media[i];
		}	
		
		if(media[i]>maior){
			maior = media[i];
			id = i;
		}
	}
	
	printf("\nO aluno com maior media foi: \n");
	printf("Nome: %s\n", guri[id].nome);
	printf("Numero: %d\n", guri[id].num);
	printf("Media: %.2f", media[id]);
		
	return 0;
}
