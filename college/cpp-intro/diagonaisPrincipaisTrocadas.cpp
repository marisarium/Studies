#include <iostream>

using namespace std;
//trocar elementos da diagonal principal da primeira matriz com a da segunda matriz.
int main(){
	int lin, col,troca, M1[2][2], M2[2][2], MM1[2],MM2[2];
	
	//recebe os valores de M1 e M2
	cout<<"Digite os valores da matriz M1 2x2: \n";
	for(lin=0;lin<2;lin++){
		for(col=0;col<2;col++){
			cout<<"Linha "<<lin+1<<", Coluna "<<col+1<<": ";
			cin>>M1[lin][col];
		}
	}
	cout<<"Digite os valores da matriz M2 2x2: \n";
	for(lin=0;lin<2;lin++){
		for(col=0;col<2;col++){
			cout<<"Linha "<<lin+1<<", Coluna "<<col+1<<": ";
			cin>>M2[lin][col];
		}
	}
	//troca as diagonais principais
	for(lin=0;lin<2;lin++){
		for(col=0;col<2;col++){
			if(lin==col){
				troca = M1[lin][col];
				M1[lin][col] = M2[lin][col];
				M2[lin][col] = troca;
				
				MM1[lin] = M1[lin][col];
				MM2[lin] = M2[lin][col];
			}
		}
	}
	
	//exibe as diagonais das duas matrizes M1 e M2
	cout<<"Diagonal de M1: ";
	for(lin=0;lin<2;lin++){
		cout<<MM1[lin]<<" ";
	}
	cout<<"\n";
	cout<<"Diagonal de M2: ";
	for(lin=0;lin<2;lin++){
		cout<<MM2[lin]<<" ";
	}
	return 0;
}
