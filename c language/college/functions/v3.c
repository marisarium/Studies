#include <stdio.h>
#include <stdlib.h>

float velMedia(float dist, float horas);

int main(){
	float vel, km,h;
	
	printf("--Programa de velocidade do piloto--\n");
	printf("Informe a distancia percorrida em km: \n");
	scanf("%f", &km);
	printf("Informe o tempo que levou pra percorrer em horas: \n");
	scanf("%f", &h);
	
	vel = velMedia(km, h);
	
	printf("A velocidade media do piloto foi de %.2f km/h", vel);
	return 0;
}

float velMedia(float dist, float horas){
	float velocidade;
	
	velocidade = dist/horas;
	return velocidade;
}
/*3. Fa�a uma fun��o que calcule a velocidade m�dia de um piloto recebendo como
par�metro a distancia percorrida em km e o tempo que levou para percorrer (em
horas).*/
