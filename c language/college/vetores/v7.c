#include <stdio.h>

int main(){
    //1 semaa tem 7 dias entao:
    int T[7], i,j, quant=0, soma=0;//T=temperatura em graus Celcius (C°)
    float media;
    char dia1[] = {"domingo"};
    char dia2[] = {"segunda"};
    char dia3[] = {"terca"};
    char dia4[] = {"quarta"};
    char dia5[] = {"quinta"};
    char dia6[] = {"sexta"};
    char dia7[] = {"sabado"};
    printf("Digite as temperaturas registradas(C°) durante a semana: \n");
    for (i = 0; i < 7; i++)
    {
        printf("A temperatura no ");
        switch (i)
        {
        case 0:
            for (j = 0; j < 8; j++)//ou uso while para variações de nomes ? 
            {
            printf("%c",dia1[j]);
            }
            break;
        case 1:
            for (j = 0; j < 8; j++)
            {
                printf("%c",dia2[j]);
            }
            break;
        case 2:
            for (j = 0; j < 6; j++)
            {
                printf("%c",dia3[j]);
            }
            break;
        case 3:
            for (j = 0; j < 7; j++)
            {
                printf("%c",dia4[j]);
            }
            break;
        case 4:
            for (j = 0; j < 7; j++)
            {
                printf("%c",dia5[j]);
            }
            break;
        case 5:
            for (j = 0; j < 6; j++)
            {
                printf("%c",dia6[j]);
            }
            break;
        case 6:
            for (j = 0; j < 7; j++)
            {
                printf("%c",dia7[j]);
            }
            break;
        default:
            break;
        }
//por favor ignore o código acima, estou apenas brincando com a formatação rsrsrsrsr.
        
        printf(" foi ");
        scanf("%d", &T[i]);
        soma += T[i];

    }
    
    media = (float) soma/7.0;

    for (i = 0; i < 7; i++)
    {
        if (T[i] > media)
        {
            quant++;
        }     
    }
    
    printf("O numero de dias em que as temperaturas estiveram acima da media essa semana foi: \n");
    printf("%d", quant);

    return 0;
}

/*Dadas as temperaturas que foram registradas diariamente durante uma semana, deseja-
se determinar em quantos dias dessa semana a temperatura esteve acima da média no período.*/