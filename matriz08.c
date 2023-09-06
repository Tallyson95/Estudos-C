/*QUESTÃO 05:
Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/
#include <stdio.h>
#define lin 4
#define col 4
#define tam 4
void criar(int mat[lin][col], int vet[],int tamanho);
void exibirMat(int mat[lin][col]);
void exibirVet(int vet[], int tamanho);
void main(){
	int mat[lin][col] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int vet[tam];
	exibirMat(mat);
	criar(mat,vet, tam);
	exibirVet(vet, tam);
}
void criar(int mat[lin][col], int vet[],int tamanho){
	int i, j, aux = 0;
	//o codigo abaixo soma os valores das colunas
	for(j=0;j<col;j++){
		for(i=0;i<lin;i++){
			aux = aux + mat[i][j];
		}
		vet[j] =aux;
		aux = 0;
	}
	
	// o codigo abaixo faz a soma das linhas
	/*void criar(int mat[lin][col], int vet[],int tamanho){
	int i, j, aux = 0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			aux = aux + mat[i][j];
		}
		vet[i] =aux;
		aux = 0;
	}
}*/
	
}

void exibirMat(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%5d", mat[i][j]);
		}
		printf("\n");
	}
}
void exibirVet(int vet[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d", vet[i]);
	}
}
