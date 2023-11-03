#include <iostream>

using namespace std;

int main(){
	float base, altura, area;
	cout<<"--Imobiliaria de terrenos retangulares--\n";
	cout<<"Qual a largura do terreno? ";
	cin>>base;
	cout<<"Qual a profundidade do terreno? ";
	cin>>altura;
	area = base*altura;
	cout<<"A area desse terreno e de "<<area<<" metros";
	
	return 0;
}
