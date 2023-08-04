/*Fazer uma função que, dado um número inteiro
positivo n, determine o seu maior e o seu menor
algarismos.
Nota: caso n seja positivo, a função realizará o solicitado
e retornará o valor 1; caso contrário, apenas retornará 0. */

#include <stdio.h>
int maiorMenor(int n, int *maior, int *menor);
void main() {
    int n, x, maior, menor;
    printf("Escolha um numero: ");
    scanf("%d", &n);
    x = maiorMenor(n, &maior, &menor);
    if(x == 1){
    	printf("%d:\nO maior algarismo eh: %d\n\nO menor algarismo eh: %d",x,maior,menor);
	}else{
		printf("%d:\nNumero invalido!",x);
	}
    
    

}

int maiorMenor(int n, int *maior, int *menor) {
    if(n<0){
    return 0;
    
	}else{
		*maior = 0;
    int algarismo;
    algarismo = n % 10;
    *menor = algarismo;
    n /= 10;

    while (n != 0) {
        algarismo = n % 10;
        n /= 10;

        if (algarismo > *maior) {
            *maior = algarismo;
        }

        if (algarismo < *menor) {
            *menor = algarismo;
        }
    }
	return 1;
	}
}
