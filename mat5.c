/*Implementar uma função que, dada uma matriz
Mm×n, gere um vetor V de tamanho n, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/
#include <stdio.h>
#define lin 3
#define col 3
void main(){
	int mat[lin][col] = {1, 2, 3, 2, 4, 5, 3 , 5, 6};
	int vet[3];
	somarCol(mat, vet);
	int i;
	for(i=0;i<3;i++){
		printf("%d  ", vet[i]);
	}
}
void somarCol(int mat[lin][col], int vet[]){
	int i, j, soma = 0;
	for(j=0;j<col;j++);
	vet[j];
	j = 0;
	for(j=j;j<col;j++){
		for(i=0;i<lin;i++){
			soma += mat[i][j];
		}
		vet[j] = soma;
		soma = 0;
	}
}


void exibirMat(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%5d", mat[i][j]);
		}
		printf("\n\n");
	}
}


