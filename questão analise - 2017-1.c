#include <stdio.h>

void main(){
	int x = funcao(15, 3);
	printf("%d" ,x);
	
}

/*int funcao (int n) {
 if (n > 0) {
	if(n % 2 == 0){
		return n + funcao(n/2);
	}else{
		return 1 + funcao(n-1);
	}
 }else{
 	return 0;
 }
 
}*/
int funcao (int A, int B) {
if (A >= B) {
return A + funcao (A-1, B+1);
} else {
return B-A;
}
}
