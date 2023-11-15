#include <iostream>

using namespace std;

int main(){
	int contador;
	cout<<"Qual o valor do contador para a contagem regressiva?";
	cin>>contador;
	
	while(contador>=0){
		cout<<contador<<"\n";
		contador--;
	}
	return 0;
}
