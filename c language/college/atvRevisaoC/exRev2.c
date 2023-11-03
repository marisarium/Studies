#include <stdio.h>

int main(){
	
	int N1, N, q, somaN, PG, i;
	printf("---Programa da PG---\n");
	printf("Por favor, digite o valor inicial: ");
	scanf("%d", &N1);
	printf("Agora, insira a razao: ");
	scanf("%d", &q);
	printf("Digite um valor inteiro N: ");
	scanf("%d", &N);
	
	PG = N1;
	
	printf("PG (");
	
	for(i= 0; i< N; i++){
		PG *= q;
		printf("%d, ", PG);
		somaN += PG;	
	}
	printf(" )");
	printf("\nA soma dos numeros dessa PG e: %d", somaN);
	
	return 0;
}
