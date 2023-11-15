#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Autor: Marisa Guimaraes Pereira, Manha, 1 periodo,
Programacao estruturada, Ciencias da computacao, FACAPE*/

int main(){
	int T, i;//triangulares, numeros da soma e contador.
	printf("Os 30 primeiros triangulares,abaixo: \n");

	while(i <= 30){//so pra variar pus o while mas podia ter sido o for tambem.
		
		T += i;
		printf("%d, ", T);
		i++;
	}
	
	return 0;
}
