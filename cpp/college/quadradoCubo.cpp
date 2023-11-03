#include <iostream>
#include <locale>
using namespace std;
//Exiba o quadrado e o cubo de um número inteiro qualquer informado pelo usuário.
int main(){
	setlocale(LC_ALL, "ptb");
	
	int num, quadrado, cubo;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	quadrado = num*num;
	cubo = num*num*num;
	
	cout<<"O quadrado de "<<num<<" é: "<<quadrado<<"\n";
	cout<<"O cubo de "<<num<<" é: "<<cubo;
	
	return 0;
}
