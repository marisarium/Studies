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
/*4. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu
volume (V = 4/3*P*R3).*/
