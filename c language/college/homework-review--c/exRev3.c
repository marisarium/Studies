#include <stdio.h>

int main(){
	int N, i;
	printf("Digite um numero inteiro N: ");
	scanf("%d", &N);
	
	for(i=1; i<= N; i++){	
		printf("%d ", i);
	}
	
	for(i=N-1; i>= 1; i--){
		printf("%d ", i);
	}
	
	return 0;
}
