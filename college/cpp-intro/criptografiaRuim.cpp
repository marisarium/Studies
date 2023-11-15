#include <iostream>
//Você está tentando métodos bastante rudimentares de criptografia para que seus dados fiquem seguros.
//Em um deles, você recebe os elementos de um vetor de 20 letra e as transfere para outro vetor no qual
//as letras estarão armazenadas na ordem inversa em que foram recebidas
using namespace std;

int main(){
	int i,j=0;
	char letras[20], letrasInversa[20];
	cout<<"Insira 20 letras: \n";
	//armazenar letras
	for(i=0;i<=20;i++){
		cin>>letras[i];
	}
	//armazenar inverso
	for(i=20;i>=0;i--){
		letrasInversa[j] = letras[i];
		j++;
	}
	//exibir
	for(i=0;i<=20;i++){
		cout<<letrasInversa[i];
		cout<<"\n";
	}
	return 0;
}
