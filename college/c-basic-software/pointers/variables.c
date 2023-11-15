#include <stdio.h>

int c;
int *pc;

int main(){
    c = 22;
    pc = &c;
    printf("%d\n",c);
    printf("%d\n",pc);
    *pc = 2;
    printf("%d\n",c);
    printf("%d\n",pc);
    return 0;
}