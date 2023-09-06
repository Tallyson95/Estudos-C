#include <stdio.h>
#define lin 30
#define col 20
void main(){
	int mat[lin][col];
	matAleatoria(mat);
	exibir(mat);
}
void matAleatoria(int mat[lin][col]){
	int i, j;
	srand(time(NULL));
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j] = rand()%100;
		}
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
