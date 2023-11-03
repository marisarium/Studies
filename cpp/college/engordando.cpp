#include <iostream>

using namespace std;

int main(){
	float peso, engordar, emagrecer;
	cout<<"--Engordando--\n";
	cout<<"Digite o seu peso: ";
	cin>>peso;
	
	engordar = peso + peso*0.15;
	emagrecer = peso - peso*0.15;
	
	cout<<"Se voce aumentar 15% do seu peso atual voce estara com "<<engordar<<" kilos\n";
	cout<<"Se voce perder 15% do seu peso atual voce estara com "<<emagrecer<<" kilos";
	
	return 0;
}
