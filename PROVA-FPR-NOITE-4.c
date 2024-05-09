/*Desenvolver uma função recursiva em C que, dados um
vetor com quant inteiros e dois números num1 e num2,
calcule a média dos valores do vetor que estão no
intervalo de num1 a num2, inclusive.
*/
#include <stdio.h>


float mediaRec(int vetor[], int tamanho, int num1, int num2, int aux, int cont, int soma);
int main() {
    int vet[] = {1, 2, 4, 5, 6, 7, 11, 14, 12, 19};
    int num1 = 1;
    int num2 = 10;
    int tamanho = 10;
    int soma = 0, cont = 0;
    float result = mediaRec(vet, tamanho, num1, num2, 0,cont, soma);
    printf("Soma dos valores no intervalo: %.1f\n", result);
    return 0;
}

float mediaRec(int vetor[], int tamanho, int num1, int num2, int aux, int cont, int soma){
    if (aux == tamanho) {
        return (float) soma / cont;
    }

    if (vetor[aux] > num1 && vetor[aux] < num2) {
        soma += vetor[aux];
        cont++;
    }

    return mediaRec(vetor, tamanho, num1, num2, aux + 1, cont, soma);
}







//explique a logica do codigo a seguir, apenas a lógica, não quero saber o código
