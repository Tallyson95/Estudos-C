#include <stdio.h>
#define TAM 7
/*Questão 04 [2,5 pontos]:
Desenvolver uma função que, dado um vetor de
inteiros vet e um número inteiro n, desloque para o
início do vetor todos os valores inferiores ou iguais a
n e para o final, os maiores do que n.
Exemplo:
vet 8 1 3 6 4 7 2
    0 1 2 3 4 5 6
 n = 5
vet 1 3 4 2 8 6 7
*/

void main(){
	int vet[TAM] = {8, 1, 3, 6, 4, 7, 2};
	int maiorN;
	//8 1 3 6 4 7 2
	
	
	//1,3,4,2,7,8,6
	int n = 5;
	exibirVetor(vet,TAM);
	vetores(n,vet,TAM, &maiorN);
	exibirVetor(vet,TAM);
	printf("\n\n%d",maiorN);
}

void vetores(int n,int vet[],int tamanho, int *maiorN){
	int i,j, aux,aux2;
	for(i=0;i<TAM-1;i++){
		for(j=i;j<TAM-1;j++){
			if(vet[i] >= n){
			*maiorN = i;
			aux = vet[i];
			vet [i] = vet[j+1];
			vet[j+1] = aux;
			
			}
		}
	}
	
}

void exibirVetor(int vetor[], int tamanho){
	
	int i;
	for (i=0;i<tamanho;i++) {
		printf (" %d", vetor[i]);
		printf("  ");
	}
	printf ("\n\n\n");
	
}
