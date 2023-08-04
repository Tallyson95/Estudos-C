/*Fazer uma função que, dado um número inteiro
positivo n, determine se os seus algarismos estão ou
não ordenados crescentemente.
Exemplos:
 n = 3456 Estão ordenados
 n = 4563 Não estão ordenados
 n = 4 Estão ordenados
Nota: pode-se considerar que n é maior do que zero, sem
a necessidade de validação.*/
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
