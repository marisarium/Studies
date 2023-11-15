#include <iostream>

using namespace std;

int main(){
	int num, i, qtdMulti3=0;
	
	cout<<"Digite 10 numeros inteiros: \n";
	for(i=0;i<10;i++){
		cin>>num;
		if(num%3==0 && num!=0){
			qtdMulti3++;
		}
	}
	cout<<"A quantidade de multiplos de 3 foi de "<<qtdMulti3;
	return 0;
}
