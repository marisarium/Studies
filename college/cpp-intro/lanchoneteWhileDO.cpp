#include <iostream>
#include <locale>
#include <bits/stdc++.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"ptb");	
	int cod, qt;
	string pedido;
	string pedidos;
	char sn='S';
	float valorTotal=0, valor=0;
	bool invalido = false;
	
	do{
		invalido = false;
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
				pedido = " Hambúrguer ";
				valor = 5.5*qt;
				break;
			case 101:
				pedido = " Cachorro-quente ";
				valor = 4.5*qt;
				break;
			case 102:
				pedido = " Milkshake ";
				valor = 7.0*qt;
				break;
			case 103:
				pedido = " Pizza brotinho ";
				valor = 8.0*qt;
				break;
			case 104:
				pedido = " Cheeseburguer ";
				valor = 8.5*qt;
				break;
			default:
				valor = 0;
		}	
		
		pedidos.append(pedido);//só funciona porque ta os pedido-pedidos como string e não como char *variavel; e pela biblioteca nova ali emcima.
		valorTotal += valor; 
		
		cout<<"Deseja incluir mais algum item ao seu pedido? (S/N): ";
		cin>>sn;
		cout<<"\n";
		
	}while(sn!='N' && sn=='S');
	
	cout<<"Seus pedidos foram: \n";
	cout<<pedidos;
	cout<<"\nTotal a pagar: R$ "<<valorTotal;
	
	return 0;
}
