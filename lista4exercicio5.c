#include <Stdio.h>

/*QUESTÃO 05: Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/

void main(){
	int i,j;
	for(i=1, j=-2 ;i<50, j>=-50;i=i+2, j= j -2){
		printf("%d ",i);
		printf("%d ",j);
	}
}
