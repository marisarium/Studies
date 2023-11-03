#include <stdio.h>

void troca(int* a, int* b);

int main(){
	int v1, v2;
	printf("Informe o valor de v1: ");
	scanf("%d",&v1);
	printf("Informe o valor de v2: ");
	scanf("%d",&v2);
	
	troca(&v1, &v2);
	
	printf("Depois da troca\n");
	printf("v1 = %d e v2 = %d", v1, v2);
	
	return 0;
}


void troca(int* a, int* b){
	int aux;
	aux = *a;  
	*a = *b;
	*b = aux;
	printf("Dentro da funcao\n");
	printf("a = %d e b = %d\n", *a, *b);
}


