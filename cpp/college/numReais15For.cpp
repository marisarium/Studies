#include <iostream>

using namespace std;

int main(){
	float num, maior=0.0;
	int i;
	cout<<"Digite 15 numeros: \n";
	
	for(i=0;i<15;i++){
		cin>>num;
		if(num>maior){
			maior = num;
		}
	}
	cout<<"O maior numero da sequencia e: "<<maior;
	return 0;
}
