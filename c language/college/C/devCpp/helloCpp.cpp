#include <stdio.h>//biblioteca de entrada e sa�da

int main()
{	
	//tem que importar a biblioteca e compilar ela sen�o vai dar erro de compila��o
	//voc� coloca int na classe e nas coisas pq tem que indexar.
	int idadeDoAluno;//camel case
	
	printf("Digite a idade do aluno: \n");//\n quebra de linha
	
	//%d indica que vai buscar uma vari�vel. - sempre ligado a cada tipo = %d : decimal = %s : string ou char vetorizado = %o : octal e etc...(tem uma tabela)
	scanf("%d",&idadeDoAluno);//& indica que vai ser indexado no endere�o de mem�ria dessa vari�vel, se esquecer disso, ele vai indexar aleat�riamente. ERRO.
	
	printf("Arigatou...<3");//basicamente sempre se lembrar de compilar(f9) e depois executar(f10).
	//cuidado com a ordem da coloca��o da sua vari�vel, se der erro de indexa��o, ele vai sair mostrando um 234546462 ou algo assim.
	
	char nome[30];
	printf("\n");
	
	printf("Qual o nome dessa pessoa? \n");
	
	scanf("%s", nome);
	
	printf("%s foi o seu nome e %d foi a sua idade.\n", nome, idadeDoAluno);//%0.2f (limita float a duas casas decimais. - a indexa��o � %f)
	//nome n�o precisa do & comercial.
	printf("Fim ");
	
	return 0;
}
