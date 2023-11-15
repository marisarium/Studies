#include<iostream>
using namespace std;

int main()
{
    float tempF, tempC;
    cout << "Temperatura em Fahrenheit: \n";
    cin >> tempF;
    tempC=(tempF-32)/1.8;
    cout << "Temperatura em graus Celcius: "<<tempC;
    
    return 0;
}