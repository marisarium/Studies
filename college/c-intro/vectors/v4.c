#include <stdio.h>

int main(){
    int i, vet1[10], vet2[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vet1[i]);
        
        if(vet1[i]%2 == 0)
        {
            vet2[i] = 0;
        }
        else
        {
            vet2[i] = 1;
        }
    }
    
    //testando mesmo que nao precise: 
    printf("Resultado: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet2[i]);
    }
    
    return 0;
}
/*Faça um algoritmo que leia um vetor de 10 posições e crie um segundo vetor
substituindo os valores pares por 0 e os ímpares por 1.*/