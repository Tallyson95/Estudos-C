#include <stdio.h>
void main(){
	int x = 3, n = 4;
	int result = potenciaRec(x,n);
	printf("%d", result);
}
int potenciaRec(int x, int n){
	if(n == 0){
		return 1;
	}else{
		return x * potenciaRec(x, n-1);
	}
}
