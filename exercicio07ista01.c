#include <stdio.h>

void main (){
	int valorHora, horaTrabalhada, salario, adicional, salarioTotal;
	printf("Digite o valor das suas horas trabalhadas: ");
	scanf("%d", &horaTrabalhada);
	printf("Digite o valor da hora-trabalho: ");
	scanf("%d", &valorHora);
	
	salario = horaTrabalhada*valorHora;
	
	if(horaTrabalhada <= 40){
		printf("O valor do seu salario semanal eh %d, mas sem direito a adicional", salario);
	}else{
		adicional = 0.5*valorHora;
		salarioTotal = salario+adicional;
		printf("O valor do seu salario semanal eh %d e o valor adicional eh %d", salario, adicional);
		printf("\nO total a ser recebido sera %d",salarioTotal);
	}
}
