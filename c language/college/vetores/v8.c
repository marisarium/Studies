#include <stdio.h>

int main(){
    int A[10], B[10], C[10],i;

    printf("Digite pares de 10 valores para soma: exemplo: '2 3'\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
        C[i] = A[i] + B[i];
    }
    printf("A soma dos pares de numeros anteriores e: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}

/*Faça um algoritmo que leia dois vetores de 10 posições e crie um terceiro vetor que será
a soma dos dois vetores lidos.*/