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
	
	//calculando o valor após anos
	
	/*QUESTÃO 03: Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento*/
	for (i=0;i<anosInvestimento;i++){
		rendimento = (investimento*(porcAoMes/100));
		investimento = investimento + rendimento;
	}
	anos = anosInvestimento/12;
	printf("O valor pelo tempo de %d ano(s) investidos sera de: %.2f", anos, investimento);
	
}
