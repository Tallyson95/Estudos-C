#include <stdio.h>

/*QUEST�O 06: Fa�a um programa que leia um
n�mero N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibir� uma
mensagem de erro e terminar� a sua
execu��o; caso contr�rio, dever� exibir os
n�meros no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os n�meros que est�o no
intervalo de 1 a 99, cujos
algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93.*/
void main(){
	int numero,n1,n2, somar, i;
	printf("Digite um numero de 1 a 18: ");
	scanf("%d", &numero);
	if(numero >18){
		printf("NUMERO INVALIDO");
	}else{
		for(i=1; i<99;i++){
			n1 = i/10;
			n2 = i%10;
			if( (n1 + n2)== numero){
				printf("%d ", i);
			}
		}
	}
	
}
