#include <stdio.h>
#include <stdlib.h>

int perfeito(int valor);

int main(){
	int val;
	printf("Digite um valor: ");
	scanf("%d", &val);
	
	if(perfeito(val)==1)
		printf("O valor %d e perfeito", val);
	else if(perfeito(val)==0)
		printf("O valor %d nao e perfeito", val);
		
	return 0;
}

int perfeito(int valor){
	int div=valor, somaDivs=1;
	int num_primo[] = {2,3,5,7,11};
	int i;
	
	for(i=0;i<5;i++){//isso ta bugado
		while(div%num_primo[i]==0){
			div = div/num_primo[i];
			somaDivs += num_primo[i];
		}
	}
	
	if(somaDivs == div)
		return 1;
	else
		return 0;
	
}

/*8. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito
perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex:
6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar 1 se o
número for perfeito. Caso contrário retornar 0.*/
