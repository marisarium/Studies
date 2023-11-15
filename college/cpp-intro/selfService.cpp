#include <iostream>

using namespace std;

int main(){
	const float QUILO = 34.9;
	float prato, preco;
	cout<<"---Restaurante SELF-SERVICE---\n";
	cout<<"Insira o peso do prato (Kg): ";
	cin>>prato;
	preco = prato * QUILO;
	cout<<"Preco: "<<preco;
	return 0;
}
