//Receba um n�mero qualquer e informe se ele � positivo ou negativo.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int num;
	cout<<"Digite um n�mero: ";
	cin>>num;
	
	if(num>0){
		cout<<"O n�mero "<<num<<" � positivo";
	}
	else{
		cout<<"O n�mero "<<num<<" � negativo";
	}
	return 0;
}
