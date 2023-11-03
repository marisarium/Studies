#include <iostream>

using namespace std;

int main(){
	int qtdAlunos,alunos,questoes, acertos=0;
	char prova[5];
	char gabarito[15] = {'A','E','B','C','C','A','D','E','D','A','A','B','E','C','C'};
	
	cout<<"Informe a quantidade de alunos: ";
	cin>>qtdAlunos;
	
	for(alunos=0;alunos<qtdAlunos;alunos++){
		for(questoes=0;questoes<15;questoes++){
			cout<<"resposta "<<questoes+1<<": ";
			cin>>prova[questoes];
			
			if(prova[questoes]==gabarito[questoes]){
				acertos++;
			}
		}
		cout<<"O aluno "<<alunos+1<<" obteve "<<acertos<<" acertos!\n";
		acertos=0;
	}
	
	return 0;
}
