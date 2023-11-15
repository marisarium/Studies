//Um casal de amigos está brincando de par ou ímpar. A cada uma das 10 jogadas que farão, 
//armazene em um vetor o número escolhido pelo jogador A (que escolheu par), e em um segundo vetor, 
//o número escolhido pelo jogador B (que escolheu ímpar). Também a cada jogada, informe o jogador vencedor.
//Ao final, informe quantas vezes cada jogador venceu
#include <iostream>

using namespace std;

int main(){
	int i,nA[10],nB[10], jogadas[10], qtdAvenceu=0, qtdBvenceu=0;
	char A='N', B='N';
	
	for(i=0;i<10;i++){
		cout<<"Par ou Impar? (P/I)\n";
		cout<<"A: ";
		cin>>A;
		cout<<"B: ";
		cin>>B;
		cout<<"Vamos girar...!\n";
		cout<<"Num A: ";
		cin>>nA[i];
		cout<<"Num B: ";
		cin>>nB[i];
		
		jogadas[i]=nA[i]+nB[i];
		
		if(jogadas[i]%2==0){
			if(A=='P' && B=='I'){
				cout<<"A ganhou!\n";
				qtdAvenceu++;
			}
			if(B=='P' && A=='I'){
				cout<<"B ganhou!\n";
				qtdBvenceu++;
			}
		}else{
			if(A=='I' && B=='P'){
				cout<<"A ganhou!\n";
				qtdAvenceu++;
			}
			if(B=='I' && A=='P'){
				cout<<"B ganhou!\n";
				qtdBvenceu++;
			}
		}
		
	}
	cout<<"A venceu "<<qtdAvenceu<<" vezes.\n";
	cout<<"B venceu "<<qtdBvenceu<<" vezes.";
	
	return 0;
}
