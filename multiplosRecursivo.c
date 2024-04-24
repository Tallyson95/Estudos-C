#include <stdio.h>
/*Questão 03:
Desenvolver uma função recursiva que exiba
todos os múltiplos do número N, inferiores ou
iguais ao valor V.*/

void main(){
	int n = 3;
	int v = 10;
	multiplosRec(n, v, 1);
}

void multiplosRec(int n, int v, int p){
	if (v >= p){
		printf("%d ", n * p);
		multiplosRec(n, v, p+1);
	}
}
