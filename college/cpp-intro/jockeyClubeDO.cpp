#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int idade=0;
	
	cout<<"--Competi��o de hipismo do Jockey Club--\n";
	//aparentemente n�o tem jeito certo de fazer isso segundo o slide, s� ignore este c�digo e se lembre apenas do while.
	do{
		cout<<"Informe sua idade: ";
		cin>>idade;
		if(idade>=7 && idade<=12){
			cout<<"A categoria do competidor �: INFANTIL\n";
		}
		else if(idade>=13 && idade<=17){
			cout<<"A categoria do competidor �: JUVENIL\n";
		}
		else if(idade>=18 && idade<=49){
			cout<<"A categoria do competidor �: ADULTO\n";
		}
		else if(idade>=50){
			cout<<"A categoria do competidor �: SENIOR\n";
		}
		else{
			cout<<"O competidor est� fora da faixa et�ria permitida na competi��o.\n";
		}
	}while(idade!=-1);
	
	return 0;
}
