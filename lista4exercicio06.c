#include <stdio.h>

/*QUESTÃO 06: Faça um programa que leia um
número N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibirá uma
mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
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
