#include <stdio.h>
#include <stdlib.h>
//ao chamar uma funcao, o programa que a chamou e pausado ate que a funcao termine sua execucao
//a funcao deve ser declarada antes do main:
/*tipo nome(parâmetro){
	declaracao
	comandos
}*/
//mas pode ser declarada depois se usar um protótipo:
//tipo nome(parâmetro);

int verifica(int n){
	if(n>0){
		return 1;
	}
	else if(n<0){
		return -1;
	}
	else{
		return 0;	
	}
}

int main(){
	int x;
	printf("--Programa verifica valores --\n");
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	printf("Se for 1=positivo, -1=negativo, 0=0\n");
	printf("Seu numero deu %d", verifica(x));
	return 0;
}
/*1. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou
negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for
igual a 0.*/

//De modo geral, evita-se fazer operacoes de leitura e escrita dentro de uma funcao.
//funcao e criada com intuito de fazer uma tarefa especifica e bem-definida
//scanf, printf tem que ser feitas em quem chamou, main(), garante a generalidade da funcao.
//declaracao de parametros e com seus tipos, podem ser quantos quiser. - informacao de quem chamou, não precisa ler na funcao.
//da pra fazer funcao sem parametro de entrada:
/*v1: 
void imprime(){
	printf("Teste\n");
}
v2:
void imprime(void){
	printf("Teste\n");
}*/
//uma funcao pode ou nao retornar valor
//se retornar alguem tem que receber
//se nao retorna bora o tipo void de retorno
//da pra retornar qualquer valor valido em C: int, char, float, double e struct(algo do usuario).
//o valor retornado pela funcao e enviado pelo comando return.
/*exemplo:
return valor ou expressao;
return;(termina uma funcao que nao retorna valor)*/
//O valor de retorno deve ser compatível com o tipo de retorno declarado para a funcao.
//uma funcao pode ter mais de um return e quando este e executado a funcao acaba.
//uma funcao criada pelo programador pode utilizar qualquer outra funcao inclusive as que foram criadas.

//funcoes tambem estao sujeitas ao escopo das variaveis, globais ou locais
/*int fatorial(int n){
	if(n==0){
		return 1;
	}else{
		int i;
		int f = 1;
		for(i=1;i<=n;i++)
			f=f*i;
		return f;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d", fatorial(n));
	
	return 0;
}*/
//variaveis globais sao declaradas fora de todas as funcoes do programa
//sao conhecidas e podem ser alteradas por todas as funcoes do programa
//quando uma funcao tem uma variavel local com o mesmo nome de uma variavel global a funcao dara preferencia a variaval local
//EVITE VARIAVEIS GLOBAIS
//passagem de parâmetros: cópia, se mudar dentro da funcao, nada acontece fora.
/*void incrementa(int n){
	n=n+1;
	printf("Dentro da funcao: x = %d\n", n);
}

int main(){
	int x = 5;
	printf("Antes da funcao: x = %d\n", x);
	
	incrementa(x);
	printf("Depois da funcao: x = %d\n", x);
	
	return 0;
}*/

//Quando se quer que o valor da variavel mude dentro da funcao, usa-se passagem de parametros por referencia
//Nesse caso, nao se passa o valor da variavel, mas sua referencia(endereco de memoria)
//utilizando o endereco da variavel, qualquer alteracao que a variavel sofra dentro da funcao sera refletida fora da funcao
//exemplo scanf(), ao ler algo do teclado, passa pra funcao scanf() o nome da variavel, nisso o valor e modificado dentro de scanf e pode ser acessado no main()
//para passar um parametro por referencia, usa-se um *(asterisco) na frente do nome do parametro '*n'.
/*void incrementa(int *n); Passagem por referencia*/
//Ao se chamar funcao, e necessario usar o "&" que nem usamos com scanf()
/*int x = 10;
incrementa(&x); Passagem por referencia*/
//Exemplo: Crie uma função que troque o valor de dois números inteiros passados por referência.
/*
void troca(int *n1, int *n2){
	int aux;
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}

int main(){
	int x1,x2;
	printf("Troca valor de dois numeros por referencia\n");
	printf("Digite x1 e x2 respectivamente: \n");
	scanf("%d %d", &x1, &x2);
	
	troca(&x1,&x2);
	
	printf("x1 = %d, x2 = %d", x1,x2);
	return 0;
}
*/
//arrays como parametros:
//arrays sao sempre passados por referencia para uma funcao
/*A passagem de arrays por referência evita a cópia desnecessária de
grandes quantidades de dados para outras áreas de memória durante a
chamada da função, o que afetaria o desempenho do programa.*/
/*É necessario declarar um segundo parametro (em geral uma variavel inteira) para passar para a funcao o tamanho do array separadamente*/
//obs: quando passa array por parametro, oq de fato e passado e o primeiro elemento do array.
/*meios de declaracao de array como parametro:
void imprime(int *m, int n);
void imprime(int m[], int n);
void imprime(int m[5], int n);
*/
//Exemplo de funcao que imprime array:
/*
void imprime(int *m, int n);

int main(){
	int vet[5] = {1,2,3,4,5};
	imprime(vet, 5);
	return 0;
}

void imprime(int *m, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d \n", m[i]);
	}
}
*/
//Para arrays nao e necessario especificar o numero de elementos para a funcao
//MAS, para arrays de mais de uma dimensao[matrizes] e preciso, exceto a primeira.
/*Exemplo:
int m[4][5] 
void imprime(int m[][5], int n);*/
/*Fator interessante: Na passagem de um array para uma função, o compilador precisar
saber o tamanho de cada elemento, não o número de elementos.

• Uma matriz pode ser interpretada como um array de arrays.

• int m[4][5]: array de 4 elementos onde cada elemento é um array de 5
posições inteiras.*/
/*As notações abaixo funcionam para arrays com mais de uma
dimensão. Mas o array é tratado como se tivesse apenas uma
dimensão dentro da função

void imprime(int *m, int n);
void imprime(int m[], int n);*/

//Da pra passar Struct por parâmetro ou por referencia.
//2 opcoes: passar por parametro toda a struct ou apenas um campo especifico
//cada campo da struct e como uma variavel independente sendo passada individualmente como acima explicado.
//Devemos acessar o conteudo da struct para somente depois acessar seus campos e modifica-los
//Uma alternativa e usar o operador seta "->"
/*Usando "*"
struct ponto{
	int x,y;
};
void atribui(struct ponto *p){
	(*p).x = 10;
	(*p).y = 20;
}

struct ponto p1;
atribui(&p1);

Usando "->"

struct ponto{
	int x,y;
};
void atribui(struct ponto *p){
	p -> x = 10;
	p -> y = 20;
}

struct ponto p1;
atribui(&p1);
*/

/*Exemplo 1: 
int quadrado(int a){
	return a*a;
}

int main(){
	int n1,n2;
	printf("Entre com um numero: ");
	scanf("%d", &n1);
	
	n2 = quadrado(n1);
	
	printf("O seu quadrado vale: %d\n", n2);
	return 0;
}
*/
