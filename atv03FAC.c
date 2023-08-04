/*Implementar uma função que, dados três
números reais num1, num2 e num3,
ordene-os de forma que, ao final, o menor
valor esteja em num1, o do meio em num2
e o maior em num3.*/
#include <stdio.h>

int ordenar(int *a, int *b, int *c,int *menor, int *meio, int *maior);

void main(){
	int num1 = 100, num2 = -100, num3 = -1;
    int menor, meio, maior;
    
    ordenar(&num1, &num2, &num3, &menor, &meio, &maior);
    printf("%d %d %d\n", menor, meio, maior);
}

int ordenar(int *a, int *b, int *c,int *menor, int *meio, int *maior){
	if(*a>*b && *a>*c){
		*maior = *a;
		if(*b>*c){
			*meio = *b;
			*menor = *c;
		}else{
			*meio = *c;
			*menor = *b;
		}
	}else{
		if(*b>*c){
			*maior = *b;
			if(*a>*c){
				*meio = *a;
				*menor = *c;
			}else{
				*meio = *c;
				*menor = *a;
			}
		}else{
			*maior = *c;
			if(*a>*b){
				*meio = *a;
				*menor = *b;
			}else{
				*meio = *b;
				*menor = *a;
			}
		}
	}
}
