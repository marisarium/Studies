#include <stdio.h>
#include <stdlib.h>

int eprimo(int val);

int main(){
	int valor = 4, primo;
	
	primo = eprimo(valor);
	
	if(primo==1)
		printf("O numero %d e primo", valor);
	else if(primo == 0)
		printf("O numero %d nao e primo", valor);
		
	return 0;
}

int eprimo(int val){
	int num_primo[] = {2,3,5,7,11}, i, cont=0;
	
	for(i=0;i<5;i++){
		if(val%num_primo[i]==0 && val!=num_primo[i]){
			cont++;
		}
	}
	if(cont>=1){
		return 0;
	}else if(cont<1){
		return 1;
	}
}
/*7. Faça uma função que receba um valor inteiro como parâmetro e retorne 1 se o
número for primo, caso contrário retornar 0.*/
