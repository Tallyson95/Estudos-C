#include <stdio.h>
/*Implementar uma função que, dados dois
vetores vetA e vetB contendo números
reais, compare elementos da mesma ordem
dos vetores (ou seja, compare o 1o valor de
vetA com o 1o de vetB, o 2o de vetA com o
2o de vetB e, assim, sucessivamente) e
mantenha em vetA os menores valores
comparados (e, consequentemente, os
maiores ficarão em vetB).
Nota: se os elementos forem iguais, nada será
feito.

Exemplo:
Antes da comparação:
vetA 5 10 11 5 8 9 9 4
     0 1 2 3 4 5 6 7

vetB 8 4 7 5 6 10 1 5
     0 1 2 3 4 5 6 7

Após a comparação:
vetA 5 4 7 5 6 9 1 4
     0 1 2 3 4 5 6 7

vetB 8 10 11 5 8 10 9 5
     0 1 2 3 4 5 6 7*/
#define TAM 8
void vetores(float vetA2[], float  vetB2[],int tamanho2);
void exibirVetor(float vetor[], float vetor2[], int tamanho2);
void main(){
	float vetA[TAM] = {5, 10, 11, 5, 8, 9, 9, 4};
	float vetB[TAM] = {8 ,4, 7, 5, 6, 10, 1, 5};
	
	
	printf("Vetores originais:\n\n");
	exibirVetor(vetA, vetB, TAM);

	printf("\n\n\n\n\n\nVetores modificados:\n\n");
	vetores(vetA, vetB, TAM);
	exibirVetor(vetA, vetB, TAM);

	
}


void vetores(float vetA2[],float  vetB2[],int tamanho){
	int i;
	float aux;
	// A 1 5 7
	// B 4 3 8
	for(i=0;i<tamanho;i++){
			if(vetA2[i]> vetB2[i]){
				aux = vetB2[i]; 
				vetB2[i] = vetA2[i]; 
				vetA2[i] = aux;
			}
	}
}

void exibirVetor(float vetor[], float vetor2[], int tamanho){
	
	int i;
	printf("Vetor A:");
	for (i=0;i<tamanho;i++) {
		printf (" %.1f", vetor[i]);
		printf("  ");
	}
	printf ("\n\n\n");
	
	printf("Vetor B:");
	for (i=0;i<tamanho;i++) {
		printf (" %.1f", vetor2[i]);
		printf("  ");
	}
}
