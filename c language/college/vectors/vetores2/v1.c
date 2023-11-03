#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    //limite de 10 numeros
    int i, num[10], userNum, cont = 0;
    printf("Programa de sorteio de 10 numeros: \n"); //
    //semente de tempo base pra numero aleatorio
    srand( (unsigned) time(NULL));
    for (i = 0; i < 10; i++)
    {
        num[i] = rand()%10;//pra ver um numero aleatorio de 0 a 9
        //printf("%d", num[i]);
    }
    printf("\nDigite seu numero: ");
    scanf("%d", &userNum);//registra um numero do usuario

    for (i = 0; i < 10; i++)
    {
        if(num[i] == userNum){//pra indicar o numero sorteado e a posicao
            printf("Seu numero %d foi sorteado! na posicao %d.\n", userNum, i);
            cont++;
        }else{//pra não repetir a frase
            if(i==9 && cont == 0){
                printf("Seu numero %d nao foi sorteado.", userNum);
            }
        }
    }   
    return 0;
}
/*Escreve um programa que sorteio, aleatoriamente, 10 números e armazene estes em
um vetor. Em seguida, o usuário digita um número e seu programa em C deve acusar
se o número digitado está no vetor ou não. Se estiver, diga a posição que está.*/
