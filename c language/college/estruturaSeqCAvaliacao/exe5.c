//autor: Marisa Guimarães Pereira
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//OLÁ ANTES DE TUDO GOSTARIA DE DIZER QUE TENHO ORGULHO DESSE CÓDIGO PORÉM ELE ME ENRAIVECE
//POR QUE? PORQUE EU TESTO 34247 E ELE FICA ARREDONDANDO O VALOR DA HORA E DOS MINUTOS E NÃO SEI OQUE FAZER SOBRE ISSO ;-;

int main(){
/*Programa de conversao segundos em hh:mm:ss
*obs: considere que nunca sera digitado um valor que seja maior 
*que aqueles correspondentes as 24 do dia.
*/	
	int entradaS;//s = segundo, m = minuto, h = hora	
	double s, m, h, fractpartH, intpartH, fractpartM, intpartM;
	
	//recebendo segundos
	printf("Digite os segundos do dia :) \n");
	scanf("%d", &entradaS);
	
	//divide os segundos por 3600
	h = (double) entradaS/3600;
	
	//separa a parte inteira da fragmentada de H após a virgula
	fractpartH = modf(h, &intpartH);
	
	//multiplica a parte fragmentada de H por 60
	m = fractpartH*60;
	
	//separa a parte fragmentada de M após a virgula
	fractpartM = modf(m, &intpartM);
	
	//multiplica a parte fragmentada de M por 60
	s = fractpartM*60;
	
	//saida em hh:mm:ss restringindo os valores em float/double em 0 após a virgula.
	printf("formatacao nova: %.0lf:%.0lf:%.0lf.", h,m,s);
		
	return 0;
}
/* código exemplo tirado da internet aleatoriamente 
*#include<stdio.h>
*#include<math.h>
*
*int main () {
*   double x, fractpart, intpart;
*
*   x = 8.123456;
*   fractpart = modf(x, &intpart);
*
*   printf("Integral part = %lf\n", intpart);
*   printf("Fraction Part = %lf \n", fractpart);
*   
*   return(0);
*}*/


/*Sugestão do professor:
Quando se trabalha com valores de ponto flutuante às vezes nos deparamos com esse problemas de precisão. Sugiro que pesquise sobre as funções ceil e floor que lidam com essa questão de arredondamento.
Porém, para resolver essa questão eu sugiro que trabalhe com valores inteiros e utilize a divisão inteira (/) associada ao operador % (mod) que captura o resto de uma divisão.

Veja o trecho de código abaixo para uma possível solução (as variáveis são todas inteiras):

horas = entrada / 3600; 
resto = entrada % 3600;
minutos = resto / 60;
segundos = resto % 60; // resto do resto ;)

*/
