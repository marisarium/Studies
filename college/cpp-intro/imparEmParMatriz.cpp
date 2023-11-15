#include <iostream>

using namespace std;

int main(){
	int lin,col,qtImpar=0, linPar=0, M[3][2];
	
	cout<<"Informe os valores da matriz M 3x2: \n";
	for(lin=0;lin<3;lin++){
		for(col=0;col<2;col++){
			cout<<"Linha "<<lin+1<<", Coluna "<<col+1<<": ";
			cin>>M[lin][col];
		}
	}
	
	for(lin=0;lin<3;lin++){
		linPar=(lin+1)%2;
		for(col=0;col<2;col++){
			if(linPar==0 && M[lin][col]%2!=0){
				qtImpar++;
			}
		}
	}
	cout<<"Existem "<<qtImpar<<" elementos impares em linhas pares nessa matriz.";
	return 0;
}
