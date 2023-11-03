#include <stdio.h>

int main(){
	int m = 0, cont, div;
	
	printf("Digite m: \n");
	
	while(m>=0){//entao se for negativo, sai do role?
		scanf("%d", &m);
		
		if(m % 2 == 0){
			//quantos divisores possui e escrever isso. - PARTE 1 - cor amarela
			div = m;
			while(div != 1){
				if(m%3 == 0){
					div = m/3;
				}
				else if(m%5 == 0){
					div = m/5;
				}
				else if(m%7 == 0){
					div = m/7;
				}
				else{
					div = m/2;
				}
				cont++;	
				printf("divisores: %d", div);
			}
			
			printf("O numero de divisores que esse numero possui e: %d", cont);
		}
		else if(m%2 != 0 && m<10) {
			//calcular e escrever o fatorial de m. - PARTE 2 - cor vermelha
		}
		else if(m%2 != 0 && m>=10){
			//escrever a soa dos inteiros de 1 até m. - PARTE 3 - cor verde
		}
		
		//system("cls");
	}
	
	
}
