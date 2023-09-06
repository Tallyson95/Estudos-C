/*QUESTÃO 03:
Desenvolver uma função que gere a seguinte
matriz M5x5:
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/
#include <stdio.h>
#define lin 5
#define col 5
void main(){
	int mat1[lin][col];
	matContraria(mat1);
	exibir(mat1);
}
void matContraria(int mat1[lin][col]){
	int i, j, cont= 1,k = 2;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat1[i][j] = cont;
			cont++;
		}
		cont = k;
		k++;
	}
}
void exibir(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%5d", mat[i][j]);
		}
		printf("\n");
	}
}

