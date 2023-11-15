#include <stdio.h>
#include <stdlib.h>


int main(){
    int A[10], B[10], U[20],i,j, k=0;
    
    printf("Digite 10 numeros: \n");
    for(i=0; i<10; i++)
    	scanf("%d", &A[i]);//ler A
	
	printf("Digite mais 10 numeros: \n");
	for(i=0; i<10;i++)
		scanf("%d", &B[i]);//ler B
	
	
	printf("A uniao entre os 2 vetores anteriores e: \n");
	for(i=0;i<10;i++){
		U[i] = A[i];
		U[i+10] = B[i];
	}

	int max = sizeof(U) / sizeof(int);//valor max do tamanho do vetor

	//retira valores duplicados wtf - mesmo valor - assustadita porem deu certo, tem outro meio no v3.
	for(i=0;i<max;i++){
		
		for(j = i + 1;j < max;){
			
			if(U[j]==U[i]){
				
				for(k=j;k<max;k++)
					U[k] = U[k+1];	
				
				max--;
			}
			else{
				j++;
			}
			
		}	
	}
	
    //imprime os valores de saida
    printf("U = {");
    for(i=0; i<max;i++)
    	printf("%d, ", U[i]);
	
	printf("}");
	
	return 0;
}
/*Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
união entre os 2 vetores anteriores, ou seja, que contém os números dos dois vetores.
Não deve conter números repetidos.*/
