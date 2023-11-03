#include <iostream>
#include <locale>

using namespace std;

int main(){
//receba a quant de dias que uma pessoa já viveu e informe quantos anos ela tem
//Desconsidere anos bissextos. Informe se ela é maior de idade.
	setlocale(LC_ALL,"ptb");
	int qtDias, idade;

	cout<<"Quantos dias você já viveu?";
	cin>>qtDias;

	idade = qtDias/365;

	cout<<"Você já viveu "<<idade<<" anos.";

	if(idade>=18){
		cout<<"Você é maior de idade";
	}

	return 0;
}
