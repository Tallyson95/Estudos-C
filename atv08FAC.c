#include <stdio.h>
#define TAM 6

void comparacao(int vetA[], int vetB[], int tamanho);
void exibirVetor(int vetor[], int tamanho);

int main(){
    int vetA[TAM] = {10, 10, 8, 2, 3, 5};
    int vetB[TAM];
    
    printf("Vetor A: ");
    exibirVetor(vetA, TAM);
    
    comparacao(vetA, vetB, TAM);
    
    printf("Vetor B: ");
    exibirVetor(vetB, TAM);
    
    return 0;
}

void comparacao(int vetA[], int vetB[], int tamanho) {
    int i, j;
    int novo_tamanho = tamanho;
    int maior, indice_maior;
    
    for (i = 0; i < tamanho; i++) {
        maior = vetA[0];
        indice_maior = 0;
        
        // Encontra o maior elemento atual do vetor A
        for (j = 1; j < novo_tamanho; j++) {
            if (vetA[j] > maior) {
                maior = vetA[j];
                indice_maior = j;
            }
        }
        
        // Adiciona o maior elemento no vetor B, evitando duplicatas
        int duplicata = 0;
        for (j = 0; j < i; j++) {
            if (vetB[j] == maior) {
                duplicata = 1;
                break;
            }
        }
        
        if (!duplicata) {
            vetB[i] = maior;
        } else {
            vetB[i] = 0; // Substitui a duplicata por zero
        }
        
        // Remove o maior elemento do vetor A
        for (j = indice_maior; j < novo_tamanho - 1; j++) {
            vetA[j] = vetA[j + 1];
        }
        
        novo_tamanho--;
    }
}

void exibirVetor(int vetor[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] != 0) {
            printf("%d   ", vetor[i]);
        }
    }
    printf("\n\n");
}

