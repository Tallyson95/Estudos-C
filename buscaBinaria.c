#include <stdio.h>

// Prot�tipo da fun��o
int buscaBin(int vet[], int x, int inicio, int fim);

int main() {
    int x = 17;
    int vetor[] = {0, 2, 4, 6, 10, 14, 17, 20, 22, 23, 25};
    int result = buscaBin(vetor, x, 0, 10);
    printf("%d", result);
    return 0; // Retorne 0 no final da fun��o main para indicar um encerramento bem-sucedido.
}

int buscaBin(int vet[], int x, int inicio, int fim) {
    if (inicio <= fim) { // Verifique se o intervalo � v�lido
        int j = (inicio + fim) / 2;

        if (x == vet[j]) {
            return j; // Retorna o �ndice do elemento encontrado
        } else if (x < vet[j]) {
            return buscaBin(vet, x, inicio, j - 1); // Recurs�o na metade esquerda
        } else {
            return buscaBin(vet, x, j + 1, fim); // Recurs�o na metade direita
        }
    }

    return -1; // Retorna -1 se o elemento n�o for encontrado
}
 
