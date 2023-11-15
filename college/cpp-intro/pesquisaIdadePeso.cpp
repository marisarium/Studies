#include <iostream>

using namespace std;
//Um instituto está realizando uma pesquisa para descobrir a idade e o peso médios da população de um bairro.
//Cada entrevistado informa seu peso e sua idade e, quando for informado 0 para o peso, o recebimento de dados
//deve ser interrompido e devem ser exibidas a quantidade de entrevistados, a média de peso e a média de idade dos mesmos.
int main(){
	int idade, qtdeEntrevistados, mediaIdade, somaIdade;
	float peso=1, mediaPeso, somaPeso; 
	somaIdade = 0;
	somaPeso = 0;
	cout<<"--Pesquisa de idade e peso medios da populacao de um bairro--\n";
	
	while(peso!=0){
		cout<<"Informe sua idade:";
		cin>>idade;
		somaIdade += idade;
		
		cout<<"Informe seu peso:";
		cin>>peso;
		somaPeso += peso;
	
		cout<<"\n";
		if(peso!=0){
			qtdeEntrevistados++;
		}		
	}
	
	mediaIdade = somaIdade/qtdeEntrevistados;
	mediaPeso = somaPeso/qtdeEntrevistados;
	
	cout<<"Foram entrevistados "<<qtdeEntrevistados<<" pessoas com uma media de peso de "<<mediaPeso<<" e media de idade de "<<mediaIdade<<" anos.";
	
	return 0;
}
