#include <stdio.h>
#include <stdlib.h>
/*Autores: Marisa Guimar�es Pereira
FACAPE - 2� Per�odo - Manh� -Programa��o Estruturada*/
int main(){
//Quest�o 02
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
/*Fa�a um programa que leia um valor inteiro N e exiba na tela o seu valor
correspondente em bin�rio.*/
