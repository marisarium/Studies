#include <stdio.h>
#include <math.h>

int main(){
	int N, powpow, i=1, soma;
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	powpow = pow(N, 2);
	
	printf("O quadrado de %d e %d = ", N, powpow);
	
	while(soma <= powpow){//para tirar o +, é só quando for '=' sai do código de repetição break;
		if(i%2 != 0){
			soma += i;	
			printf("%d+", i);
		}
		i++;	
	}
	return 0;
}
