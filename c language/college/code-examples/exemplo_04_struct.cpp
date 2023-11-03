#include <stdio.h>
#include <math.h>

struct ponto{
	float x;
	float y;
};

typedef struct ponto Ponto;

void leitura(Ponto* p);
void exibir(Ponto p);
float distancia(Ponto p1, Ponto p2);


int main(){
	Ponto p1, p2;
	float d;
	
	leitura(&p1);
	leitura(&p2);
	exibir(p1);
	exibir(p2);
	d = distancia(p1, p2);
	printf("A distancia entre os pontos eh de %0.2f\n", d);
	return 0;
}

void leitura(Ponto* p){
	printf("Informe a coordenada x: ");
	scanf("%f", &p->x);	//uma maneira de fazer a leitura
	printf("Informe a coordenada y: ");
	scanf("%f",&(*p).y); //outra maneira de fazer a leitura
}

void exibir(Ponto p){
	printf("Coordenadas do ponto (%0.2f, %0.2f)\n",p.x, p.y);
}

float distancia(Ponto p1, Ponto p2){
	float dist;
	dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	return dist;
}


