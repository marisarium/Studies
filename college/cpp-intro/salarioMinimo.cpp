//Receba o valor de um sal�rio e informe se ele � maior ou menor do que o sal�rio m�nimo. Considere o valor de 1000,00 como sendo o m�nimo.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	const float SALMINIMO = 1000.00;
	float sal;
	cout<<"Informe o valor do seu sal�rio: ";
	cin>>sal;
	if(sal<SALMINIMO){
		cout<<"Seu sal�rio de R$"<<sal<<" � menor que o sal�rio m�nimo de R$"<<SALMINIMO;
	}
	else{
		cout<<"Seu sal�rio de R$"<<sal<<" � maior que o sal�rio m�nimo de R$"<<SALMINIMO;
	}
	return 0;
}
