#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int numMes;
	char *mes;
	bool invalido=false;
	
	cout<<"Informe o numero do mês: ";
	cin>>numMes;
	
	switch(numMes){
		case 1:
			mes="Janeiro";
			break;
		case 2:
			mes="Fevereiro";
			break;
		case 3:
			mes="Março";
			break;
		case 4:
			mes="Abril";
			break;
		case 5:
			mes="Maio";
			break;
		case 6:
			mes="Junho";
			break;
		case 7:
			mes="Julho";
			break;
		case 8:
			mes="Agosto";
			break;
		case 9:
			mes="Setembro";
			break;
		case 10:
			mes="Outubro";
			break;
		case 11:
			mes="Novembro";
			break;
		case 12:
			mes="Dezembro";
			break;
		default:
			cout<<"Mês inválido!";
			invalido=true;
	}
	
	if(invalido==false){
		cout<<"O número "<<numMes<<" equivale ao mês de "<<mes;
	}
	return 0;
}
