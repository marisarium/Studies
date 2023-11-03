#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dataPExt(char data[], int c);//bah neh preguica de terminar isso

int main(){
	int c = 10;
	char data[c];
	
	printf("Digite o dia,mes e ano: assim'02/04/2006'");
	scanf("%s", data);
	
	dataPExt(data, c);
	return 0;
}

void dataPExt(char data[], int c){
	int dataInt,i,dia,mes,ano;
	
	for(i=0;i<c;i++){
		if(data[i]=="/"){
			data[i]=" ";
		}
	}
	dataInt = atoi(data);
	
	for(i=0;i<c;i++){
		dataInt%=10;
		ano = dataInt;
		dataInt/=10;
		
		printf("dataInt= %d", dataInt);
	}
}
/*9. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na
tela no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de
janeiro de 2000.*/
