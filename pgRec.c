#include <stdio.h>
/*Quest�o 05:
Pede-se a implementa��o de uma fun��o
recursiva que exiba os n primeiros termos de
uma PG (Progress�o Geom�trica), onde a1 � o
seu primeiro termo e q a raz�o.
Observa��o: uma PG consiste em uma
sequ�ncia de valores, iniciadas pelo valor a1. Os
demais elementos s�o definidos como o
anterior multiplicado pela raz�o.*/

int main(){
	int a1 = 3, q = 5, n = 5;
	pgRec(a1, q, n);
	return 0;
}
void pgRec(int a1, int q, int n){
	if(n > 0){
		printf("%d ", a1);
		a1 *= q;
		pgRec(a1, q, n-1);
	}
}
