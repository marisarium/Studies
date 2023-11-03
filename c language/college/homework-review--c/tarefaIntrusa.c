#include <stdio.h>
/*Autores: Marisa Guimarães Pereira
FACAPE - 2º Período - Manhã -Programação Estruturada*/
int main(){
//Questão 02
    int N, div;
    printf("--Conversor decimal/binario--");
    printf("\nDigite um valor inteiro N: ");
    scanf("%d", &N);
    
    printf("Binarios: \n");

    for (div = N; div<0; div = N/2)
    {
        if(div%2 == 0){
            printf("0");
        }else{
            printf("1");
        }
    }
    return 0;
}
/*Faça um programa que leia um valor inteiro N e exiba na tela o seu valor
correspondente em binário.*/
