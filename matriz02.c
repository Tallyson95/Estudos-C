#include <stdio.h>
#define lin 20
#define col 15
void preencherMat(int mat[lin][col]);
void exibir(int mat[lin][col]);
void main(){
	int matriz[lin][col];
	preencherMat(matriz);
	exibir(matriz);
}
void preencherMat(int mat[lin][col]){
	int i, j, cont = 1;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			//funciona mas é mais caro, por fazer esse calculo 300 vezes mat[i][j] = i+1;
			mat[i][j] = cont;
		}
		// assim funciona e faz menos calculos aritimeticos, o que deixa mais barato, realizando so 20 vezes cont++;
		cont++;
	}
}
void exibir(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("%3d", mat[i][j]);
		}
		printf("\n");
	}
}
