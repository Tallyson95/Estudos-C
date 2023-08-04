#include <stdio.h>
/*Pede-se uma função que, dado um número
inteiro n, apresente todas as combinações
possíveis contendo de três valores,
respeitadas as seguintes regras:
1. Cada um dos três valores da sequência
deve estar no intervalo de 1 a n;
2. A sequência não pode conter números
repetidos;
3. Os valores da sequência devem estar
ordenados crescentemente.
Por exemplo, caso o valor de n fosse igual
a 5, apenas as seguintes combinações
deveriam ser apresentadas pela função:
1 2 3
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5*/

void combinarNum(int a);
void main(){
	int n = 5;
	combinarNum(n);
}
void combinarNum(int a){
	int i,j,k;
	
	for(i=1;i<=a;i++){
		for(j=i+1;j<=a;j++){
			for(k=j+1;k<=a;k++){
				printf("%d %d %d\n", i,j, k);
				
			}
		}
	}
}

