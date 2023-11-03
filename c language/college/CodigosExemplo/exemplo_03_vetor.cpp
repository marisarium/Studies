#include <stdio.h>

void leitura(int v[], int n);//uma maneira de receber vetor como parâmetro
void exibe(int* v, int n);//outra maneira de receber vetor como parâmetro
void dobrarValores(int v[], int n);

int main(){
	int vet[5];
	leitura(vet, 5);//outra maneira: enviar o endereço do primeiro elemento -> &vet[0]
	exibe(vet, 5);
	dobrarValores(vet, 5);
	exibe(vet, 5);
	return 0;
}


void leitura(int v[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Informe o %d%c valor: ", i+1, 167);
		scanf("%d",&v[i]);
	}
}

void exibe(int* v, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",v[i]);
	}
	printf("\n");
}

void dobrarValores(int v[], int n){
	int i;
	for(i=0; i<n; i++){
		v[i] = v[i] * 2;
	}
}


