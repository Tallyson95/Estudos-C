#include <stdio.h>

void main(){
	int n = 2, result;
	result = fatorial(n);
	printf("%d", result);
}

int fatorial(int n){
	int i = n - 1;
	for(i=i;i>1;i--){
		n = n*i;
	}
	return n;
}
