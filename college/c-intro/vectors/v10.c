#include <stdio.h>

int main(){
    float media[5];
    char nome[5][30];//LEMBRAR DESSE ESQUEMA AQUI!  vetor de vetor de string.
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome do aluno: ");
        scanf("%s", &nome[i]);
        printf("Informe a media do aluno: ");
        scanf("%f", &media[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if(media[i] >= 7.0){
            printf("\n%s foi aprovado(a)! com media %.1f", nome[i], media[i]);
        }else
        {
            printf("\n%s foi reprovado(a)! com media %.1f", nome[i], media[i]);
        }
    }
    
    return 0;
}
/*Faça um algoritmo para armazenar em vetores o nome e a média de 50 alunos. Exibir na
tela o nome e a média dos alunos aprovados. Considere que para ser aprovado o aluno
deve ter média maior ou igual a sete.*/