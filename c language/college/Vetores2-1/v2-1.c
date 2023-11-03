#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i=0, contador = 0,j=0; 
    int *seq;
    scanf("%d", &n);
    seq = (int *)malloc(n * sizeof(int));//ponteiro tem que ta condizente com o tipo
    while (i != n)//queria por o valor digitado como o tamanho do vetor,ai achei isso aqui na internet: (int *) malloc(size_t bytes); que seria alocação de memoria do vetor com o tamanho da variável
    {//ei depois tem como ver se essa dica é boa mesmo: https://pt.stackoverflow.com/questions/34060/como-criar-um-vetor-de-tamanho-vari%C3%A1vel ?
        scanf("%d", &seq[i]);
        i++;
    }
    
    printf("Sequencia: ");
    for (i = 0; i != n; i++)
    {
        if(i==n-1){
            printf("%d", seq[i]);
            continue;//essa parte é só uma frescura pra tirar a virgula do final mesmo e ver se eu lembrava dos incondicionais :D!
        }
        printf("%d, ", seq[i]);
    }

    printf("\nSaida: \n");
    //daqui pra baixo o código ta cagado:!!!!!!!!!!!!!!!!!!!!!!
        
    for (i = 0; i != n; i++)
    { 
        for(j=0; j!= n; j++)
        {
            if (seq[i]==seq[j])//compara os valores de int
            {
                contador++;
            }
        }
        if (contador == 1)
        {
            printf("\n%d ocorre 1 vez", seq[i]);
        }
        else if(contador > 1)
        {
            printf("\n%d ocorre %d vezes", seq[i], contador);
        }  
        contador = 0;//zera o contador
    }
    
    free(seq);/*"Se for necessário liberar a memória ocupada por essas variáveis, é preciso recorrer à função free." tirei isso desse site: https://www.ime.usp.br/~pf/algoritmos/aulas/aloca.html */
    return 0;
}
/*Dada uma seqüência de n números reais, determinar os números que compõem a
seqüência e o número de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Seqüência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Saída: -1.7 ocorre 3 vezes
3.0 ocorre 1 vez
0.0 ocorre 2 vezes
1.5 ocorre 1 vez
2.3 ocorre 1 vez*/
