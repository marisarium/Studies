#include <iostream>

using namespace std;

int main(){
	cout<<"Competicao de hipismo \n";
	int idade;
	cout<<"Digite sua idade: ";
	cin>>idade;
	
	if(idade>=7 && idade<=12){
		cout<<"Sua categoria e infantil.";
	}
	else if(idade>=13 && idade<=17){
		cout<<"Sua categoria e juvenil.";
	}
	else if(idade>=18 && idade<=49){
		cout<<"Sua categoria e adulto.";
	}
	else if(idade>=50){
		cout<<"Sua categoria e senior.";
	}
	else{
		cout<<"idade invalida.";
	}
	
	return 0;
}
