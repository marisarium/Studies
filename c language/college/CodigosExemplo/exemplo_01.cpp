#include <stdio.h>
#include <stdlib.h>

int opcao;//variável global


float areaRet(float larg, float comp);
float areaTri(float base, float altura);
float areaQuad(float lado);
void menu();

int main(){
	float largura, comprimento, resultado, b, h, l;
	menu();
	while(opcao >= 1 && opcao <= 4){
		switch(opcao){
			case 1:
				printf("Voce escolhe area do retangulo\n");
				printf("Digite a largura: ");
				scanf("%f",&largura);
				printf("Digite o comprimento: ");
				scanf("%f",&comprimento);
				resultado = areaRet(largura,comprimento);
				system("cls");
				printf("O resultado eh %0.2f\n\n", resultado);
				menu();
				break;
			case 2:
				printf("Voce escolhe area do triangulo\n");
				printf("Digite a base: ");
				scanf("%f",&b);
				printf("Digite a altura: ");
				scanf("%f",&h);
				resultado = areaTri(b,h);
				system("cls");
				printf("O resultado eh %0.2f\n\n", resultado);
				menu();
				break;
			case 3:
				printf("Voce escolhe area do quadrado\n");
				printf("Digite o lado: ");
				scanf("%f",&l);
				resultado = areaQuad(l);
				system("cls");
				printf("O resultado eh %0.2f\n\n", resultado);
				menu();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}

void menu(){
	printf("FIGURAS GEOMETRICAS - CALCULO DE AREAS\n");
	printf("1 - Area do retangulo\n");
	printf("2 - Area do triangulo\n");
	printf("3 - Area do quadrado\n");
	printf("4 - Sair\n");
	
	printf("Escolha a opcao desejada: ");
	scanf("%d",&opcao);
	
	while(opcao < 1 || opcao > 4){
		system("cls");
		printf("Opcao invalida!\n\n");
		printf("FIGURAS GEOMETRICAS - CALCULO DE AREAS\n");
		printf("1 - Area do retangulo\n");
		printf("2 - Area do triangulo\n");
		printf("3 - Area do quadrado\n");
		printf("4 - Sair\n");
		printf("Escolha a opcao desejada: ");
		scanf("%d",&opcao);
	}
}


float areaRet(float larg, float comp){//parâmetros
	float ret;
	ret = larg * comp;
	return ret;
}

float areaTri(float base, float altura){
	float ret;
	ret = (base * altura)/2;
	return ret;	
}

float areaQuad(float lado){
	return lado * lado;
}






