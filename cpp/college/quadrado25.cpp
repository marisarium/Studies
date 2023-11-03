#include <iostream>

using namespace std;

int main(){
	//exiba o quadrado de um numero inteiro qualquer informado pelo usuario e diga se ele e maior que 25.
	int num;
	cout<<"Informe um numero: ";
	cin>>num;
	if(num*num>25){
		cout<<"O quadrado desse numero eh maior que 25.";
	}
	return 0;
}
