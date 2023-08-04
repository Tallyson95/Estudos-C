#include <stdio.h>
/*Desenvolver uma função que, dado um
número inteiro n, retorne a quantidade de
algarismos desse valor.*/

int algarismos(int n);
void main() {
    int num , x;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    x = algarismos(num);
    printf("\nA quantidade de algarismos do numero %d eh: %d",num , x);
    
}
int algarismos(int n) {
    int  i = 0, cont = 0;
    
    for(i=i;n!=0;i++){
    	n /=10;
    	cont++;
    	
	}
    return cont;
}

