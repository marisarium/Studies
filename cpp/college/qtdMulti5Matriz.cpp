#include <iostream>

using namespace std;

int main(){
	int lin,col, matriz[3][4], qtdMulti5=0;
	
	cout<<"preencha a matriz 3x4: \n";
	for(lin=0;lin<3;lin++){
		for(col=0;col<4;col++){
			cout<<"linha "<<lin+1<<" coluna "<<col+1<<": ";
			cin>>matriz[lin][col];
			
			if(matriz[lin][col]%5==0){
				qtdMulti5++;
			}
		}
	}
	cout<<"A quantidade de numeros multiplos de 5 armazenados na matriz e "<<qtdMulti5;
	return 0;
}
