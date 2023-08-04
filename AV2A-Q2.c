/*Fazer uma fun��o que, dado um n�mero inteiro
positivo n, determine se os seus algarismos est�o ou
n�o ordenados crescentemente.
Exemplos:
 n = 3456 Est�o ordenados
 n = 4563 N�o est�o ordenados
 n = 4 Est�o ordenados
Nota: pode-se considerar que n � maior do que zero, sem
a necessidade de valida��o.*/
#include <stdio.h>

int ordenarAlgarismos(int n);
void main() {
    int num, result;
    printf("Entre com um numero positivo: ");
    scanf("%d", &num);

    result = ordenarAlgarismos(num);

    if (result == 1){
        printf("Algarismos ordenados crescentemente.");
    } else {
        printf("Algarismos nao ordenados crescentemente.");
    }

}

int ordenarAlgarismos(int n){
    int algarismo = n % 10, aux;
    n /= 10; 

    while (n>0) {
        aux = n % 10;
        
        if (aux> algarismo) {
            return 0;
        }

        algarismo = aux;
        n /= 10;
    }
    return 1;
}
