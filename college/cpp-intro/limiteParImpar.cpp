#include <iostream>

using namespace std;

int main(){
	int contador,limite, numPar=0,numImpar=0;
	
	cout<<"Defina um limite: ";
	cin>>limite;
	for(contador=1;contador<=limite; contador++){
		if(contador%2==0){
			numPar++;
		}
		else{
			numImpar++;
		}
	}
	cout<<"Existem "<<numPar<<" numeros pares e "<<numImpar<<" numeros impares.";
	return 0;
}
