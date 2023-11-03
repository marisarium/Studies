//Receba o valor de um salário e informe se ele é maior ou menor do que o salário mínimo. Considere o valor de 1000,00 como sendo o mínimo.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	const float SALMINIMO = 1000.00;
	float sal;
	cout<<"Informe o valor do seu salário: ";
	cin>>sal;
	if(sal<SALMINIMO){
		cout<<"Seu salário de R$"<<sal<<" é menor que o salário mínimo de R$"<<SALMINIMO;
	}
	else{
		cout<<"Seu salário de R$"<<sal<<" é maior que o salário mínimo de R$"<<SALMINIMO;
	}
	return 0;
}
