/*Fazer uma fun��o recursiva que, dado um
n�mero inteiro N, exiba o mesmo na base 2
(bin�ria).*/
#include <stdio.h>
void main(){
	int n = 4;
	binarioRecursivo(n);
}
void binarioRecursivo(int n){
	
	if(n>0){
		binarioRecursivo(n/2);
		printf("%d", n%2);
	}
}
