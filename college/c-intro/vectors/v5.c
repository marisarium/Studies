#include <stdio.h>

int main(){
    int N[10], i, soma = 0;
    float media;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &N[i]);
        soma += N[i]; 
    }
    media = soma/10.0;//nem vou me esquecer disso aqui.
    printf("A media aritmetica desses valores e: %.2f", media);

    return 0;
}
/*Fazer um algoritmo para ler 10 valores em um vetor e apresentar o valor da média
aritmética desses valores.*/