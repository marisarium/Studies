#include <iostream>
#include <locale>
using namespace std;
//Sabendo que o dono de uma loja aplica 20% sobre o valor de compra de um produto, informe o valor sugerido para venda com base no valor pago na compra do produto.
int main(){
	setlocale(LC_ALL, "ptb");
	float valorDeCompra, valorDeVenda;
	
	cout<<"Digite o valor de compra do produto: ";
	cin>>valorDeCompra;
	
	valorDeVenda = valorDeCompra*0.2 + valorDeCompra;
	
	cout<<"O valor de venda será de R$ "<<valorDeVenda<<" reais.";
	
	return 0;
}
