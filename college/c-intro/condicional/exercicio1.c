#include <stdio.h>

int main(){
	
	//Dados dois n�meros distintos, informe qual deles� o maior.
	
	int v1,v2,maior;
	
	printf("Digite o valor 1: ");
	scanf("%d", &v1);
	
	printf("Digite o valor 2: ");
	scanf("%d", &v2);
	
    maior= v1>v2 ? v1:v2;//tern�rio 1 para declarar
    v1>v2 ?printf("Maior: %d", v1):printf("Maior: %d", v2);//tern�rio 2
    //tern�rios encadeados:
    v1>v2 ?printf("\nMaior: %d", v1):v1<v2 ? printf("\nMaior: %d", v2) : printf("\nEntao sao iguais!");
	
	return 0;
	
}
