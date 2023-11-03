#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"ptb");	
	int cod, qt;
	char *pedido;
	float valorTotal;
	bool invalido = false;
	
	cout<<"*** Cardápio ***\n";
	cout<<"100 - Hambúrguer - R$5,50\n";
	cout<<"101 - Cachorro-quente - R$4,50\n";
	cout<<"102 - Milkshake - R$7,00\n";
	cout<<"103 - Pizza brotinho - R$8,00\n";
	cout<<"104 - Cheeseburguer - R$8,50\n";
	
	cout<<"Informe o código do seu pedido: ";
	cin>>cod;
	cout<<"Informe a quantidade: ";
	cin>>qt;
	
	switch(cod){
		case 100:
			pedido = "Hambúrguer";
			valorTotal = 5.5*qt;	
			break;
		case 101:
			pedido = "Cachorro-quente";
			valorTotal = 4.5*qt;
			break;
		case 102:
			pedido = "Milkshake";
			valorTotal = 7.0*qt;
			break;
		case 103:
			pedido = "Pizza brotinho";
			valorTotal = 8.0*qt;
			break;
		case 104:
			pedido = "Cheeseburguer";
			valorTotal = 8.5*qt;
			break;
		default:
			invalido = true;
	}
	
	if(invalido == false){
		cout<<"Seu pedido foi "<<pedido<<" e o valor a pagar é R$"<<valorTotal;
	}
	
	return 0;
}
