#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

int main(int argc, char *argv[]) 
{
	//Exercicio 8 
	//const float pi = 3.1416;desempenho o define é melhor
	double raio, comprimentoE, areaE, volE;
	
	printf("Digite o raio: ");
	scanf("%lf", &raio);
	
	comprimentoE = 2*PI*raio;
	areaE = PI*pow(raio,2);
	volE = (3*PI*pow(raio, 3))/4.0;
	
	printf("\n a) o comprimento e %0.2lf", comprimentoE);
	printf("\n b) a area e %0.2lf", areaE);
	printf("\n c) o volume e %0.2lf", volE);
	
  return 0;
	
}

/*int a,b, subtracao;//(exercicio 1)
	
	scanf("%d %d", &a, &b);
	
	subtracao = a - b;
	
	printf("Subtracao: %d", subtracao);*/
	
/*exercicio 2
	int a,b,c, multiplicacao;
	
	scanf("%d %d %d", &a, &b, &c);
	
	multiplicacao = a * b * c;
	
	printf("\n Multiplicacao: %d", multiplicacao);	*/	
	
/*exercicio 3
	
	float precoProduto;
	double precoPosDesconto;
	
	scanf("%f", &precoProduto);
	
	precoPosDesconto = precoProduto * 0.90f;
	//pq ta dando zero?
	printf("\n Valor com desconto de 10% : %.2lf",precoPosDesconto);*/

/*exercicio 4
	float custoTeatral, precoConvite, quantConvitesMin;
	
	printf("Qual o custo desse espetaculo teatral? \n");
	scanf("%f", &custoTeatral);
	printf("Qual o preco do convite? \n");
	scanf("%f", &precoConvite);
	
	quantConvitesMin = custoTeatral/precoConvite;//vou precisar do valor absoluto.
	
	printf("\n A quantidade de convites minima para o espetaculo e: %.0f", quantConvitesMin);
	*/
/*//Exercicio 5
	float salFixo, valorVendas, comissao, salFinal;
	
	printf("Qual o salario fixo do funcionario e quanto ele vendeu? respectivamente \n");
	scanf("%f %f", &salFixo, &valorVendas);
	
	comissao = valorVendas * 0.04f;
	salFinal = comissao + salFixo;
	
	printf("\n A comissao recebida foi %.2f e o salario final foi %.2f", comissao, salFinal);*/
/*
//Exercicio 6
	
	float bMaior, bMenor, altura;
	double areaTrapezio;
	
	printf("Digite a base maior, menor e a altura respectivamente: \n");
	scanf("%f %f %f", &bMaior, &bMenor, &altura);
	
	areaTrapezio = (((bMaior + bMenor)*altura)/2);
	
	printf("A area do trapezio e: %.2lf", areaTrapezio);*/
/*//Exercicio 7
	//cateto 1 e 2 e a hipotenusa.
	float c1,c2,hipo;
	printf("Digite o valor dos catetos: \n");
	scanf("%f %f", &c1, &c2);
	
	hipo = sqrt(pow(c1,2) + pow(c2,2));
	
	printf("A hipotenusa e: %.2f", hipo);
	return 0;*/	
	
	
