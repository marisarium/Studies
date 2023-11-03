#include <stdio.h>
#include <stdlib.h>

float pesoIdeal(float alt, char *sex);

int main(){
	float altura, pesoId;
	char sexo[1];
	
	printf("==Programa peso ideal==\n");
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	printf("Informe seu sexo 'M'masculino ou 'F'feminino: ");
	scanf("%s", sexo);
	
	pesoId = pesoIdeal(altura, sexo);
	
	printf("Seu peso ideal e: %.2f", pesoId);
	
	return 0;
}

float pesoIdeal(float alt, char *sex){
	
	float peso=0.0;
	
	if(sex[0] == 'M'){
		peso = (72.7*alt)-58;
	}
	else if(sex[0] == 'F'){
		peso = (62.1*alt)-44.7;
	}
	return peso;
}

/*2. Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa
e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula
peso ideal = 72.7 * alt - 58 e, para mulheres, peso ideal = 62.1 * alt - 44.7.*/
