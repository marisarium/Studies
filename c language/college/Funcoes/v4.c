#include <stdio.h>
#include <stdlib.h>

float volume(float raio){
	float P = 3.14, V;
	V = (float)4.0/(3.0*P*(raio*raio*raio));
	return V;
}

int main(){
	float R;
	printf("Digite o raio da esfera: ");
	scanf("%f", &R);

	printf("O volume da esfera e: %f", volume(R));
	return 0;
}
/*4. Fa�a uma fun��o que recebe por par�metro o raio de uma esfera e calcula o seu
volume (V = 4/3*P*R3).*/
