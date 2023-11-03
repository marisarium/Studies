#include <stdio.h>
#include <stdlib.h>
/*Autores: Marisa Guimarães Pereira
FACAPE - 2º Período - Manhã -Programação Estruturada*/
int main(){
//Questão 02
    int N,i;
    char binario[8];
    
    printf("--Conversor decimal/binario--");
    printf("\nDigite um valor inteiro N: ");
    scanf("%d", &N);
    
    printf("Binarios: \n");

    for (i = 7; i >=0; i--)
    {
        if(N%2 == 0){
            binario[i] = '0';
        }else{
            binario[i] = '1';
            N = N /2;
        }
    }

    for(i = 0; i<8; i++){
        printf(" %c ", binario[i]);
    }
    
    return 0;
}
/*Faça um programa que leia um valor inteiro N e exiba na tela o seu valor
correspondente em binário.*/
