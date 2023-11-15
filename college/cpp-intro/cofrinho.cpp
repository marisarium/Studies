#include <iostream>

using namespace std;

int main(){
	float qtTotalm;
	int qtm25, qtm50, qtm100;
	cout<<"--Cofrinho--\n";
	cout<<"Quantas moedas de 25 centavos vc tem? ";
	cin>>qtm25;
	cout<<"Quantas moedas de 50 centavos vc tem? ";
	cin>>qtm50;
	cout<<"Quantas moedas de 1 real vc tem? ";
	cin>>qtm100;
	
	qtTotalm = qtm25*0.25 + qtm50*0.5 + qtm100;
	cout<<"A quantia total economizada foi de R$ "<<qtTotalm<<" reais.";
	return 0;
}
