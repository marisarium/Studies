#include <stdio.h>

int main(){
	int x;
	int* ptr;
	x = 10;
	ptr = &x;
	printf("%d\n", x);
	printf("%d\n", *ptr);
	*ptr = 35;
	printf("%d\n", x);
	printf("%d\n", *ptr);
	
	printf("Endereco de x: %p\n", &x);
	printf("Endereco de ptr: %p\n", &ptr);
	printf("Endereco apontado por ptr: %p\n", ptr);
	
	return 0;
}

