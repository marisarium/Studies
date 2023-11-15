#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int linhas, contador;
	string star="*", star2="*";
	cout<<"Quantas linhas devera ter o triangulo? ";
	cin>>linhas;
	
	for(contador=1; contador<=linhas;contador++){
		cout<<star;
		star.append(star2);
		cout<<"\n";
	}
	//é gambiarra mas funcionou.
}
