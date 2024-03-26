#include <stdio.h>
#define lin 3
#define col 3
void main(){
	int mat[lin][col] = {1, 2, 7, 2, 4, 5, 3 , 5, 6};
	if(matSimetrica(mat) == 1){
		printf("Eh simetrica!");
	}else{
		printf("Nao eh simetrica!");
	}
	
}

int matSimetrica(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(mat[i][j] != mat[j][i]){
				return 0;
			}
		}
	}
	return 1;
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
