//Receba um n�mero qualquer e informe se ele � par ou �mpar.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int num;
	cout<<"Digite um n�mero: ";
	cin>>num;
	
	if(num%2 == 0){
		cout<<"o n�mero "<<num<<" � par";
	}
	else{
		cout<<"o n�mero "<<num<<" � �mpar";
	}

	return 0;
}
