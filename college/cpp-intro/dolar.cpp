#include <iostream>

using namespace std;

int main() {
    float  Reais, cot, Dolar;
	std::cout << "digite quantos reais voce tem: ";
	cin>>Reais;
	std::cout << "qual a cotacao do dolar hoje: ";
	cin>>cot;
	Dolar = Reais/cot;
	std::cout << "voce tem U$"<<Dolar<<" dolares";
    
    return 0;
}
