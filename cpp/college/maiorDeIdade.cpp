#include <iostream>
#include <locale>

using namespace std;

int main(){
//receba a quant de dias que uma pessoa j� viveu e informe quantos anos ela tem
//Desconsidere anos bissextos. Informe se ela � maior de idade.
	setlocale(LC_ALL,"ptb");
	int qtDias, idade;

	cout<<"Quantos dias voc� j� viveu?";
	cin>>qtDias;

	idade = qtDias/365;

	cout<<"Voc� j� viveu "<<idade<<" anos.";

	if(idade>=18){
		cout<<"Voc� � maior de idade";
	}

	return 0;
}
