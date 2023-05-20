#include <stdio.h>

void main(){
	int valorUsuario, 
	notasEmoedas, 
	resto, 
	resultado;
	printf("Digite o valor desejado: ");
	scanf("%d", &valorUsuario);
	 
	notasEmoedas = valorUsuario/100;
	resto = valorUsuario%100;
	notasEmoedas = notasEmoedas + resto/50;
	resto = resto%50;
	notasEmoedas = notasEmoedas + resto/20;
	resto = resto%20;
	notasEmoedas = notasEmoedas + resto/10;
	resto = resto%10;
	notasEmoedas = notasEmoedas + resto/5;
	resto = resto%5;
	notasEmoedas = notasEmoedas + resto/2;
	resto = resto%2;
	notasEmoedas = notasEmoedas + resto/1;
	resto = resto%1;
	printf("O menor numero de notas e moedas para o valor de");
	printf(" %d ", valorUsuario);
	printf("sera");
	printf(" %d", notasEmoedas);
		
}
