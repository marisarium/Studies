#include <stdio.h>
#include <stdlib.h>

#define maxParcelas 24

int main(){
	//ta com erro!
	/*Programe um c�digo em C para aprovar empr�stimo banc�rio.O c�digo deve pedir tr�s informa��es: valor do empr�stimo, 
	*n�mero de parcelas e sal�rio do solicitante. O n�mero de  parcelas  n�o  pode  ser  superior  a  24. 
	*Aprovar empr�stimo caso o valor das parcelas representem no m�ximo 30% do sal�rio do solicitante.*/
	
	float valEmpresta, salSolicita, valParcelas;
	int numParcelas;
//	const maxParcelas = 24;
	
	printf("Informe o valor do emprestimo: ");
	scanf("%f", &valEmpresta);
	
	printf("Informe o numero de parcelas: ");
	scanf("%d", &numParcelas);
	
	printf("Informe quanto recebe de salario: ");
	scanf("%f", &salSolicita);

	if(numParcelas>=maxParcelas){//consertar a l�gica? por que ele n�o entra na condi��o??
		
		valParcelas = valEmpresta/numParcelas;
		
		if(valParcelas <= salSolicita*0.30){
			
			printf("Emprestimo aprovado!");
		}	
		printf("Emprestimo reprovado!");	
	}
	printf("Reprovado pois parcelas excede o numero permitido");//consertar a l�gica? por que ele n�o entra na condi��o??
	
	return 0;
}
