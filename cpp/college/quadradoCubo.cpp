#include <iostream>
#include <locale>
using namespace std;
//Exiba o quadrado e o cubo de um n�mero inteiro qualquer informado pelo usu�rio.
int main(){
	setlocale(LC_ALL, "ptb");
	
	int num, quadrado, cubo;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	quadrado = num*num;
	cubo = num*num*num;
	
	cout<<"O quadrado de "<<num<<" �: "<<quadrado<<"\n";
	cout<<"O cubo de "<<num<<" �: "<<cubo;
	
	return 0;
}
