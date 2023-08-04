#include <stdio.h>



int main() {
    int tam = 5,i;
    
    
    int num1[tam], num2[tam], result[tam+1];
    
    printf("Preencha o com 5 numeros:\n\n");
    for (i = 0; i < tam; i++) {
        scanf("%d", &num1[i]);
    }
    
    printf("Prencha com mais 5 numeros:");
    for (i = 0; i < tam; i++) {
        scanf("%d", &num2[i]);
    }
    somar(num1, num2, result, tam);
    for (i = 0;i<tam; i++) {
        printf("%d ", result[i]);
    }
}

void somar(int numero1[], int numero2[], int resultado[], int tamanho){
    int sobe1 = 0,i;
    
    for (i=tamanho-1;i>=0;i--) {
        int soma = numero1[i] + numero2[i] + sobe1;
        resultado[i] = soma % 10;
        sobe1 = soma / 10;
    }
}
