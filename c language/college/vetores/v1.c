#include <stdio.h>

int main(){
    int i, soma = 0, vetor[20];

    for(i = 0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Vetores armazenados: ");
    for(i = 0; i<20; i++){
        printf("%d ", vetor[i]);
        if (vetor[i]%2==0) {
            soma++;
        }
    }
    printf("\nO numero de valores pares dentro desse vetor e: \n %d", soma);

    return 0;
}
/*Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir,
conte quantos valores pares existem no vetor.*/