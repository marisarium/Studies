#include <stdio.h>

int c[3] = {2,3,4};
int *pc;

int main(){
    pc = &c[0];    
    printf("%d\n",*pc);
    pc++; //increments the index or memory location
    printf("%d\n",*pc);
    return 0;
}