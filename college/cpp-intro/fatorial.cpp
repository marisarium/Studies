#include <iostream>

using namespace std;

int main(){
	int num,i,fat;
	cout<<"digite um numero: ";
	cin>>num;
	fat=num;
	for(i=num-1;i>0;i--){
		fat = fat*i;
	}
	cout<<"O fatorial de num e: "<<fat;
}
