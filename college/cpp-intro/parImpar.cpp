//Receba um número qualquer e informe se ele é par ou ímpar.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int num;
	cout<<"Digite um número: ";
	cin>>num;
	
	if(num%2 == 0){
		cout<<"o número "<<num<<" é par";
	}
	else{
		cout<<"o número "<<num<<" é ímpar";
	}

	return 0;
}
