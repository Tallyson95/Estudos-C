/*QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/
#include <stdio.h>

void main(){
	int n, a,b;
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	printf("Defina o intervalo: ");
	scanf("%d %d", &a, &b);
	multiplos(n,a,b);
	
	
}
void multiplos(int n, int a, int b){
	int  result,i;
	for(i=a+1;i<b;i++){
		if(i>a && i<=b){
			result = (n*i);
			printf("%d ", result);
		}
	}
}
