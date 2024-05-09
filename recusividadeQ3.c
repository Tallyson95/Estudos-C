#include <stdio.h>
void main(){
	const n= 3, v = 32;
	multiplos(n, v);
}
void multiplos(int n, int v){
	int aux = n;
	multiplosRecursivo(n,v, aux);
}

void multiplosRecursivo(int n, int v, int aux){
	if(n<=v){
		printf("%d  ",n);
		multiplosRecursivo(n + aux  , v, aux);
		
	}
}
