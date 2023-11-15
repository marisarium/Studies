#include <iostream>
#include <locale>
using namespace std;
//Receba a quantidade de dias que uma pessoa já viveu e informe quantos anos ela tem. Desconsidere os anos bissextos
int main(){
	setlocale(LC_ALL, "ptb");
	int diasVividos, idade;
	cout<<"Diga quantos dias você viveu: ";
	cin>>diasVividos;
	
	idade = diasVividos/365;
	
	cout<<"Voce tem ou fará "<<idade<<" anos.";
	
	return 0;
}
