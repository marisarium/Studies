#include <stdio.h>
#include <stdlib.h>

#define maxParcelas 24

int main(){
	//ta com erro!
	/*Programe um código em C para aprovar empréstimo bancário.O código deve pedir três informações: valor do empréstimo, 
	*número de parcelas e salário do solicitante. O número de  parcelas  não  pode  ser  superior  a  24. 
	*Aprovar empréstimo caso o valor das parcelas representem no máximo 30% do salário do solicitante.*/
	
	float valEmpresta, salSolicita, valParcelas;
	int numParcelas;
//	const maxParcelas = 24;
	
	printf("Informe o valor do emprestimo: ");
	scanf("%f", &valEmpresta);
	
	printf("Informe o numero de parcelas: ");
	scanf("%d", &numParcelas);
	
	printf("Informe quanto recebe de salario: ");
	scanf("%f", &salSolicita);

	if(numParcelas>=maxParcelas){//consertar a lógica? por que ele não entra na condição??
		
		valParcelas = valEmpresta/numParcelas;
		
		if(valParcelas <= salSolicita*0.30){
			
			printf("Emprestimo aprovado!");
		}	
		printf("Emprestimo reprovado!");	
	}
	printf("Reprovado pois parcelas excede o numero permitido");//consertar a lógica? por que ele não entra na condição??
	
	return 0;
}
