#include <stdio.h>

void main(){
	//declarando variaveis
	int  anosInvestimento, anos, i;
	float porcAoMes, investimento, conta, rendimento;
	
	//solicitando os dados
	printf("Digite o valor de investimento: ");
	scanf("%f",&investimento);
	printf("Digite o valor do rendimento ao mes: ");
	scanf("%f",&porcAoMes);
	printf("Digite quantos meses de investimento: ");
	scanf("%d",&anosInvestimento);
	
	//calculando o valor ap�s anos
	
	/*QUEST�O 03: Jo�ozinho investiu Q reais em
uma aplica��o com rendimento fixo de R% ao
m�s. Pede-se a implementa��o de um
programa que calcule o valor (e exiba-o)
dispon�vel na conta de Jo�ozinho ap�s A anos
de investimento*/
	for (i=0;i<anosInvestimento;i++){
		rendimento = (investimento*(porcAoMes/100));
		investimento = investimento + rendimento;
	}
	anos = anosInvestimento/12;
	printf("O valor pelo tempo de %d ano(s) investidos sera de: %.2f", anos, investimento);
	
}
