#include <stdio.h>
/*Autores: Marisa Guimar�es Pereira
FACAPE - 2� Per�odo - Manh� -Programa��o Estruturada*/
int main(){
//Quest�o 02
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
/*Fa�a um programa que leia um valor inteiro N e exiba na tela o seu valor
correspondente em bin�rio.*/
