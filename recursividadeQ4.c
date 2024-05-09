/*Fazer uma função recursiva que, dado um
número inteiro N, exiba o mesmo na base 2
(binária).*/
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
