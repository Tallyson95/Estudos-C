/*Desenvolver uma função que determine o maior
múltiplo de n existente no intervalo definido pelos
números a e b, inclusive.*/	

#include <stdio.h>

void main(){
	int n = 5, a=1,b=10, maior, x;
	maiorMultiplo(n,a,b,&maior);
	printf("O maior multiplo de %d no intervalo de %d e %d eh o numero: %d ", n,a,b,maior);
	
}

void maiorMultiplo(int n, int a, int b,int *maior){
	int i, aux =0;
	
	for(i=0;i<b;i++){
		if(i>a && i<b){
			aux = n*i;
			
		}
		
	}
	*maior = aux;
}

