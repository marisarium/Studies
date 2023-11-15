#include <iostream>

using namespace std;

int main(){
	float A[4][4];
	int linha, lin,col;
	
	cout<<"Digite os valores da matriz A 4x4: \n";
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			cout<<"Linha "<<lin+1<<", Coluna "<<col+1<<": ";
			cin>>A[lin][col];
		}
	}
	
	cout<<"Qual linha da matriz A quadrada voce quer acessar? ";
	cin>>linha;
	
	for(lin=0;lin<4;lin++){
		if(lin==linha-1){
			cout<<"Linha "<<linha<<": ";
			for(col=0;col<4;col++){
				cout<<A[lin][col]<<" ";	
			}
		}
	}
	return 0;
}
