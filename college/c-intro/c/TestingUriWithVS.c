#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int a,b,c;
  float MaiorAB, MaiorBC, Maior;
  
  scanf("%d %d %d", &a, &b, &c);
  
  MaiorAB = (a+b+abs(a-b))/2;
  MaiorBC = (b+c+abs(b-c))/2;
  
  Maior = (MaiorAB + MaiorBC + abs(MaiorAB-MaiorBC))/2;
  	
  printf("%.0f eh o maior\n", Maior);	
  return 0;
}
