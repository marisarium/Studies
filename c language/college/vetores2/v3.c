#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet1[10], vet2[10], i, j,repete=0,inter[10];//interssec��o = inter[10]
    int max = sizeof(inter) / sizeof(int);
    
    printf("Programa de intersseccao de valores:\n(quant max = 10)\n");
    
    printf("Digite os valores do vetor 1: \n");
    for(i=0; i<10; i++){	
    	scanf("%d", &vet1[i]);	//l� o vetor 1
	}
	
	printf("Digite os valores do vetor 2: \n");
	for(i=0; i<10; i++){
		scanf("%d", &vet2[i]);//l� o vetor 2
	}
	
	printf("A interssecao de valores entre o vetor 1 e 2 e: \n");
	
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			
			if(vet1[i]==vet2[j]){//O ERRO TA AQUI - ele faz direito em retirar os valores iguais mas algo aqui atribui mais 2 valores desnecessarios ao vetor
				inter[i] = vet1[i];//recebe os valores iguais na interssecao mas isso ta certo? rever funcionalidade
			}
			
		}	
	}
	/*
	for(i=0; i<max; i++){
		printf(" %d ", inter[i]);//mostra como ta o inter pra testar
	}*/

	//verifica repeticao no inter e retira a apresentacao dos valores iguais: 
	printf("\nC1,2 = {");
	for(i=0; i<max;i++){
		
		for(j=0; j<max;j++){
			
			if (inter[i] == inter[j] && i==j){
				repete = 0;
			}
			else if(inter[i] == inter[j] && i!=j){
				repete = 1;
			}
		}
		
		if(repete==0){
			printf("%d, ", inter[i]);
		}
	}
	printf("}");
    return 0;
}
/*Fa�a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersec��o entre os 2 vetores anteriores, ou seja, que cont�m apenas os n�meros que
est�o em ambos os vetores. N�o deve conter n�meros repetidos.*/
