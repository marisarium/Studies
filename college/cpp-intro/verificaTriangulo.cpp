#include <iostream>

using namespace std;

int main(){
	int l1,l2,l3;
	
	cout<<"---Verificar o tipo de um triangulo---\n";
	cout<<"Digite o lado 1: ";
	cin>>l1;
	cout<<"Digite o lado 2: ";
	cin>>l2;
	cout<<"Digite o lado 3: ";
	cin>>l3;
	
	if(l1 == l2 && l2 == l3){
		cout<<"triangulo: equilatero";
	}
	else if(l1 == l2 || l2 == l3 || l1 == l3){
		cout<<"triangulo: isoceles";
	}else{
		cout<<"triangulo: escaleno";
	}
	
	return 0;
}
