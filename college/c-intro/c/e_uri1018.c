#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){	
 
 int N, resto, quociente, n1, n2, n3, n4, n5, n6, n7;
 
 scanf("%d", &N);
 
 n1 = 100;
 n2 = 50;
 n3 = 20;
 n4 = 10;
 n5 = 5;
 n6 = 2;
 n7 = 1;
 
 printf("%d\n", N);
 resto = N;
 
 quociente = resto/n1;
 printf("%d nota(s) de R$ %d,00\n", quociente, n1);
 resto %= n1;
 
 quociente = resto/n2;
 printf("%d nota(s) de R$ %d,00\n", quociente, n2);
 resto %= n2;
 
 quociente = resto/n3;
 printf("%d nota(s) de R$ %d,00\n", quociente, n3);
 resto %= n3;
 
 quociente = resto/n4;
 printf("%d nota(s) de R$ %d,00\n", quociente, n4);
 resto %= n4;
 
 quociente = resto/n5;
 printf("%d nota(s) de R$ %d,00\n", quociente, n5);
 resto %= n5;
 
 quociente = resto/n6;
 printf("%d nota(s) de R$ %d,00\n", quociente, n6);
 resto %= n6;
 
 quociente = resto/n7;
 printf("%d nota(s) de R$ %d,00\n", quociente, n7);
 resto %= n7;
   
  return 0;
}

