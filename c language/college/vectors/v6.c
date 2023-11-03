#include <stdio.h>

#define MAX 5

int main(){
    int i, j, vet1[MAX], vet2[MAX];
    /*Note que apenas expressões e valores constantes são permitidas numa lista
    de valores iniciais. O uso de variáveis causa erro de compilação. - LIVRO DE C (então vou chutar um numero)*/

    //escaneia o vetor 1
    printf("Digite 5 valores para o vetor 1 e o mostrarei invertidamente: \n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &vet1[i]);//aqui ta okay
    }
    //põe o 1 no 2 de forma invertida com ajuda da variavel j
    i = 0;
    for (j = MAX-1; j >= 0; j--)
    {
        vet2[j] = vet1[i];
        i++;//já chequei aqui e a variavel i: 0 1 2 3 4 é colocada nas suas posições corretamente de j: 4 3 2 1 0
    }
    //imprime o vetor 1
    printf("vetor 1: ");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", vet1[i]);//aqui ta okay
    }
    //imprime o vetor 2
    printf("\nvetor 1 invertido: ");

    for (j=0; j < MAX; j++)
    {
        printf("%d ", vet2[j]);
    }
    //tudo okay :3!
    
    return 0;
}

/*Faça um programa que copia o conteúdo de um vetor em um segundo vetor de forma
invertida.*/