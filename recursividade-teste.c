#include <stdio.h>
void main(){
	int n = 100;
	recursividade(n);
}

int recursividade(int n){
	if(n>=0){
		printf("%d\n", n);
		recursividade(n-1);
	}
}
