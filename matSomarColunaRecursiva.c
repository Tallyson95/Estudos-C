#include <stdio.h>
/*Pede-se o desenvolvimento de uma função recursiva que, 
dada uma matriz M de L linhas e C colunas, onde L e C são
constantes, e três linhas L1, L2 e L3, altere os elementos de L3, 
de forma que cada um consista na soma dos elementos
de L1 e L2, conforme ilustrado no exemplo abaixo:*/
#define lin 4
#define col 4

void somarMatRecursivo(int mat[lin][col], int L1, int L2 , int L3, int i, int j);
void main(){
	int mat[lin][col] ={1, 2, 3, 2, // L1
	                    4, 5, 3 ,5,//  L2
						6, 2, 5, 3,
						1, 7, 8, 9};// L3 = 5 , 7, 6, 7;
	int L1 = 0, L2 = 1, L3 = 3;
	somarMatRecursivo(mat, L1, L2 , L3, 0, 0);
	exibirMat(mat);
}

void somarMatRecursivo(int mat[lin][col], int L1, int L2 , int L3, int i, int j){
	i = i;
	j = j;
	
	if(i < lin){
		mat[L3][j] = mat[L1][j] + mat[L2][j];
		i++;
		j++;
		somarMatRecursivo(mat, L1, L2, L3 ,i, j);
	}
	return;
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
