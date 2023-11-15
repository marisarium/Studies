#include <iostream>

using namespace std;

int main(){
	int lin,col,A[2][4], B[2][4], C[2][4];
	
	cout<<"Insira os elementos da matriz A: \n";
	for(lin=0;lin<2;lin++){
		for(col=0;col<4;col++){
			cout<<"linha "<<lin+1<<" coluna "<<col+1<<": ";
			cin>>A[lin][col];
		}
	}
	
	cout<<"Insira os elementos da matriz B: \n";
	for(lin=0;lin<2;lin++){
		for(col=0;col<4;col++){
			cout<<"linha "<<lin+1<<" coluna "<<col+1<<": ";
			cin>>B[lin][col];
		}
	}
	cout<<"A matriz C e: \n";
	for(lin=0;lin<2;lin++){
		for(col=0;col<4;col++){
			C[lin][col] = A[lin][col]*B[lin][col];
			cout<<"Linha "<<lin+1<<",Coluna "<<col+1<<": "<<C[lin][col]<<"\n";
		}
	}
	
	return 0;
}
