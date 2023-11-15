#include <stdio.h>
#include <math.h>

#define MAX 3

struct ponto{
	float x;
	float y;
};

typedef struct ponto Ponto;
void leitura(Ponto* p);
void exibir(Ponto p);
float distancia(Ponto p1, Ponto p2);

int main(){
	Ponto dados[MAX];
	int i;
	float d;
	for(i=0; i<MAX; i++){
		printf("Leitura do ponto %d\n",i);
		leitura(&dados[i]);
	}
	
	for(i=0; i<MAX; i++){
		printf("Mostrando o ponto %d\n",i);
		exibir(dados[i]);
	}
	
	for(i=0;i<MAX-1;i++){
		d = distancia(dados[i], dados[i+1]);
		printf("Distancia do ponto %d ao ponto %d = %0.2f\n", i, i+1, d);
	}
	
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


