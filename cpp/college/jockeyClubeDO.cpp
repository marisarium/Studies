#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int idade=0;
	
	cout<<"--Competição de hipismo do Jockey Club--\n";
	//aparentemente não tem jeito certo de fazer isso segundo o slide, só ignore este código e se lembre apenas do while.
	do{
		cout<<"Informe sua idade: ";
		cin>>idade;
		if(idade>=7 && idade<=12){
			cout<<"A categoria do competidor é: INFANTIL\n";
		}
		else if(idade>=13 && idade<=17){
			cout<<"A categoria do competidor é: JUVENIL\n";
		}
		else if(idade>=18 && idade<=49){
			cout<<"A categoria do competidor é: ADULTO\n";
		}
		else if(idade>=50){
			cout<<"A categoria do competidor é: SENIOR\n";
		}
		else{
			cout<<"O competidor está fora da faixa etária permitida na competição.\n";
		}
	}while(idade!=-1);
	
	return 0;
}
