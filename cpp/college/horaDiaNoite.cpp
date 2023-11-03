#include <iostream>

using namespace std;

int main(){
	int hora;
	cout<<"Digite a hora: ";
	cin>>hora;
	
	if(hora>6 && hora<18){
		cout<<"eh dia";
	}
	else{
		cout<<"eh noite";
	}
	return 0;
}
