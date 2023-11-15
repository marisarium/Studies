#include <iostream>

using namespace std;
//tabuada
int main(){
	int num, contador=0;
	cout<<"Quer ver a tabuada de qual numero? ";
	cin>>num;
	do{
		cout<<num<<" X "<<contador<<" = "<<num*contador<<"\n";
		contador++;
	}while(contador<=10);
	return 0;
}
