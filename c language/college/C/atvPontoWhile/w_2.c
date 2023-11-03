#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Autor: Marisa Guimaraes Pereira, Manha, 1 periodo,
Programacao estruturada, Ciencias da computacao, FACAPE*/

int main(){
	int i,j;
	
	for(i=1; i<=10; i++){
		printf("\n%d, ",i);
		
		for(j=1; j<=10; j++){
			printf("%d ", j);	
		}
	}
	
	return 0;
}
