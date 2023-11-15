#include <iostream>

using namespace std;

int main(){
	int anoAtual, anoNasc, idade;
	cout<<"Ano atual: ";
	cin>>anoAtual;
	cout<<"Ano de nascimento: ";
	cin>>anoNasc;
	idade = anoAtual-anoNasc;
	cout<<"Voce tem ou fara "<<idade<<" anos.";
	return 0;
}
