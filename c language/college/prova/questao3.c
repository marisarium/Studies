#include <stdio.h>
/*Autor: Marisa Guimarães Pereira - 2º Periodo - Manhã - FACAPE
Programação Estruturada - Prof. Carlinhos*/

int main(){
	int N, i, den = 1;//den = denominador
	double PI=0;
		
	printf("Qual a quantidade de termos da serie: ");
	scanf("%d", &N);
	
	printf("a serie PI e: ");
	for(i=1; i<=N; i++){
		
		if(i%2 == 0){
			PI -= 4/den;
		}	
		else{
			PI += 4/den; 
		}
		den +=2;
		printf("4/%d  ", den);
	} 
	printf("\n O valor da constante PI e: %.4lf", PI);
		
	return 0;
}
