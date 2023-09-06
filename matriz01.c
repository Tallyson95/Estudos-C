/*Faça uma função que, dada uma matriz M3×3 de
reais, gere a matriz Mt, sua transposta.*/
#include <stdio.h>



void main(){
	int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
	int mat2[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n");printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat2[i][j] = mat1[j][i];
			printf("%d", mat2[i][j]);
		}
		printf("\n");
	}
}

