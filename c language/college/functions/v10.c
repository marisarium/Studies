#include <stdio.h>
#include <stdlib.h>

int segConvert(int hora, int min, int seg);

int main(){
	int h,min,seg, segTotal;
	
	printf("Insira as horas minutos e segundos assim: '02 05 56'= \n");
	scanf("%d %d %d", &h, &min, &seg);
	
	segTotal = segConvert(h,min,seg);
	
	printf("O total de segundos foi: %d", segTotal);
	return 0;
}

int segConvert(int hora, int min, int seg){
	int segundos;
	hora = hora *3600;
	min = min*60;
	segundos = seg+min+hora;
	return segundos;
}

/*10. Faça uma função que receba 3 números inteiros como parâmetros, representando
horas, minutos e segundos, e os converta em segundos.*/
