#include <stdio.h>
//think about this...
int main(){
    int arr[] = {2,3,4,5};
    int* p = (arr + 2);
    printf("%d\n", *arr + 15);
    printf("%d\n", arr);
    printf("%d\n", *p);
    printf("%d", p);
    return 0;
}