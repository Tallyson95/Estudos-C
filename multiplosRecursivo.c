#include <stdio.h>
/*Quest�o 03:
Desenvolver uma fun��o recursiva que exiba
todos os m�ltiplos do n�mero N, inferiores ou
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
