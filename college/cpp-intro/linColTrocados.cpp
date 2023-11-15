#include <iostream>

using namespace std;

int main(){
	float A[4][4], B[4][4];
	int lin,col;
	
	cout<<"Digite os valores da matriz A 4x4: \n";
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			cout<<"Linha "<<lin+1<<", Coluna "<<col+1<<": ";
			cin>>A[lin][col];
		}
	}
	
	//as linhas de B são as colunas de A.
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			B[lin][col]=A[col][lin];
		
		}
	}
	
	cout<<"A matriz B e: \n";
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			cout<<"Linha "<<lin+1<<", Coluna "<<col+1<<": "<<B[lin][col]<<"\n";
		}
	}
	
	return 0;
}
