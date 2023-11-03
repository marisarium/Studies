#include <iostream>

using namespace std;
//corpo em queda livre
int main(){
	const float AG = 9.8;
	float vel, seg;
	cout<<"----Calcular velocidade do corpo em queda livre----\n";
	cout<<"digite o tempo que o corpo levou para chegar ao solo: ";
	cin>>seg;
	vel = AG*seg;
	cout<<"o corpo caiu a uma velocidade de "<<vel<<" m/s";
	return 0;
}
