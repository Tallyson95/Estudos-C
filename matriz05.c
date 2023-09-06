#include <stdio.h>
#define lin 7
#define col 7
void main(){
	int mat[lin][col], x, y;
	int result;
	matAleatoria(mat);
	exibir(mat);
	printf("Escolha o numero: ");
	scanf("%d",&x);
	printf("Escolha a linha: ");
	scanf("%d", &y);
	result = ocorrenciasMat(mat,x, y);
	printf("\n\nO numero de ocorrencias de %d na linha %d eh: \t%d",x,y, result);
}
void matAleatoria(int mat[lin][col]){
	int i, j;
	srand(time(NULL));
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j] = rand()%10;
		}
	}
}
int ocorrenciasMat(int mat[lin][col],int x, int y){
	int i, j, cont = 0;
	for(i=y;i<y+1;i++){
		for(j=0;j<col;j++){
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
