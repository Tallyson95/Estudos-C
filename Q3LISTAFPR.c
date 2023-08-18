/*QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.*/
#include <stdio.h>
void main(){
	int n;
	printf("N: ");
	scanf("%d",&n);
	fibonacci(n);
}

void fibonacci(int n){
	int i = 1, esq = 0, di=1, termo = 3, aux;
	
	if(n>=3){
		while(termo<=n){
		aux = i;
		esq = di;
		di = i;
		i = esq+di;
		termo++;
		}
	    printf("%d termo: %d ", n,aux);
	}else{
		if(n==2){
			printf("2 termo: 1");
		}else{
			if(n==1){
				printf("1 termo: 0");
			}else{
				printf("Nao eh possivel verificar com N menor que 1");
			}
		}
	}
}
