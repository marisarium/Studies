#include <stdio.h>

int main(){
    int A[10],B[10], M[10], i,j;
    printf("Digite os valores da multiplicacoes: '1 2' seria 1x2\n");
    
    for(i=0; i<10;i++){
        scanf("%d %d", &A[i], &B[i]);
        M[i] = A[i]*B[i];
    }

    printf("O resultado das multiplicacoes sao: \n");
    for(i=0; i<10; i++){
        printf("%d x %d = %d \n", A[i], B[i], M[i]);
    }

    return 0;
}
/*Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos
elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante.*/