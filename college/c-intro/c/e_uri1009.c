#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) 
{
  char nome[30];
  double salFixo, totalVendas, salTotal;
    
  scanf("%s %lf %lf", nome, &salFixo, &totalVendas);

  salTotal = (totalVendas*0.15) + salFixo;

  printf("TOTAL = R$ %0.2lf", salTotal);
  
  return 0;
}
