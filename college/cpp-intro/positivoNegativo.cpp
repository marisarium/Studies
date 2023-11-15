//Receba um número qualquer e informe se ele é positivo ou negativo.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int num;
	cout<<"Digite um número: ";
	cin>>num;
	
	if(num>0){
		cout<<"O número "<<num<<" é positivo";
	}
	else{
		cout<<"O número "<<num<<" é negativo";
	}
	return 0;
}
