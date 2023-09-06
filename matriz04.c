#include <stdio.h>
#define lin 50
#define col 20
void main(){
	int mat[lin][col], x = 10;
	int result;
	result = ocorrenciasMat(mat,x);
	exibir(mat);
	printf("\n\nO numero de ocorrencias de %d eh: \t%d",x, result);
}
int ocorrenciasMat(int mat[lin][col],int x){
	int i, j, cont = 0;
	srand(time(NULL));
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j] = rand()%100;
			if(mat[i][j] == x){
				cont++;
			}
		}
	}
	return cont;
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
