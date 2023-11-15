#include <iostream>

using namespace std;

int main(){
	int i, j,tentar, pos=0,num[10], tentativas=0;
	bool achou = false;
	cout<<"--O Jogo--\n";
	cout<<"Preencha 10 numeros inteiros: \n";
	
	for(i=0; i<10; i++){
		cin>>num[i];
	}
	
	cout<<"Advinhe qual e o numero: \n";
	
	for(i=3;i>0;i--){
		cin>>tentar;
		tentativas++;
		for(j=0;j<10;j++){
			if(tentar==num[j]){
				pos = j;
				achou = true;
			}
		}
		if(achou==true){
			i=0;
		}
	}
	
	if(achou==false){
		cout<<"Que pena! Voce nao acertou...";
	}
	else{
		cout<<"Parabens! Este numero esta na posicao "<<pos<<" do vetor! Voce usou "<<tentativas<<" tentativas...";
	}
	
	return 0;
}
