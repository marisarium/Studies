#include <iostream>

using namespace std;

int main(){
	int i,n,a=0,b=1,show=0;
	cout<<"Quantos termos da serie fibonacci deseja ver? ";
	cin>>n;
	
	for(i=2;i<=n;i++){
		show=a+b;
		a=b;
		b=show;
		cout<<show<<"\n";
	}
}
