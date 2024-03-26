/*QUESTÃO 03:
Desenvolver uma função que gere uma matriz
Mn?n, nos moldes do exemplo apresentado a
seguir (que consiste em uma matriz de ordem
5)*/

#include <stdio.h>
#define lin 5
#define col 5

void main(){
	int mat[lin][col];
	int n = 4;
	matSequencia(n,mat);
	exibirMat(mat);
}

void matSequencia(int n, int mat[lin][col]){
	int i, j;
	int aux = n;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j] = n;
			n++;
		}
		n = aux+1;
		aux+=1;
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
