#include <stdio.h>

int main(){
    int A[5],i, soma=0;//nunca mais esquecerei de declarar a soma dsadasds.

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
        if(A[i]%2 != 0){
            soma++;
        }
    }
    printf("A soma dos valores impares e: %d ", soma);

    return 0;
}
/*Desenvolver um algoritmo que efetue a leitura de 5 elementos inteiros para um vetor A.
    No final, apresentar a soma de todos os elementos cujo valor seja ímpar.*/