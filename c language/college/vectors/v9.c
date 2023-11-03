#include <stdio.h>

int main(){
    int A[15],i, maior = 0, posMa = 0, menor = 0, posMe = 0;
    /*momento brisado = e se o maior e menor elemento aparecer +1 vez? uso variaveis para armazenar os 
    lugares ou gasto espaços vazios na memoria com vetores? porque nem todos os espaços serão preenchidos...*/

    printf("Digite 15 valores: ");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &A[i]);
        if(i == 0){
            maior = A[i];
            menor = A[i];
        }
        
        if(A[i]>=maior){
            maior = A[i];
            posMa = i;
        }
        
        if(A[i]<=menor){
            menor = A[i];
            posMe = i;
        }
    }
    printf("a. Maior elemento do vetor e %d e a que posicao em que se encontra e %d", maior, posMa);
    printf("\nb. Menor elemento do vetor e %d e a que posicao em que se encontra e %d", menor, posMe);
    return 0;
}

/*Faça um programa que carregue um vetor com 15 posições, calcule e mostre:
a. Maior elemento do vetor e em que posição esse elemento se encontra
b. Menor elemento do vetor e em que posição esse elemento se encontra*/