#include <stdio.h>
/*QUESTÃO 02: Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1*/

void main(){
	int i,j,soma;
	
	for(i=1, j=50 ;i<=50 ;j--, i++){
		soma = i+j;
		printf("%d %d ",i,j);	
	}
	printf("a soma e: %d", soma);
}
