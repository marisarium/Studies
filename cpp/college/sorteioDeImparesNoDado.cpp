#include <iostream>

using namespace std;
//Um dado � lan�ado 20 vezes e, a cada lan�amento, a face sorteada � lan�ada em um vetor. Ao final dos sorteios, informe quantas vezes cada face �mpar foi sorteada.
//n�o entendi esse lance de sorteio mas fodace. - pera entendi, o sorteio � o usu�rio digitando, puts � o sono mds...
int main(){
	int i, cont1=0, cont3=0, cont5=0, face[20];//porque um dado tem 6 faces	
	
	for(i=0;i<=19;i++){
		cout<<"Informe a face sorteada na "<<i+1<<"a. vez: ";
		cin>>face[i];
	}
	for(i=0;i<=19;i++){
		switch(face[i]){
			case 1:
				cont1++;
				break;
			case 3:
				cont3++;
				break;
			case 5:
				cont5++;
				break;
		}
	}
	cout<<"A face 1 foi sorteada "<<cont1<<" vezes.\n";
	cout<<"A face 3 foi sorteada "<<cont3<<" vezes.\n";
	cout<<"A face 5 foi sorteada "<<cont5<<" vezes.\n";
	
	return 0;
}
