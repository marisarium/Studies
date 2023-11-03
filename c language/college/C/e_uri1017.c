#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){	
//12km/L - t(horas) - vm(km/h) - km = ? - L = ?
 int t, vm;
 float L, km;
 scanf("%d", &t);
 scanf("%d", &vm);
 
 km = vm * t;
 L = km / 12;
 
 printf("%.3f\n", L);
   
  return 0;
}
