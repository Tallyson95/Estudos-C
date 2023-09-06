#include <stdio.h>
#define lin 3
#define col 3
void main(){
	int mat[lin][col] = /*{1,2,3,2,4,5,3,5,6};*/ {1,2,3,2,3,4,3,4,5}; 
	// exemplo de nao simetrica {1,7,3,4,3,4,3,4,5};
	int result;
	//matAleatoria(mat);
	exibir(mat);
	result = verSimetria(mat);
	if(result == 1){
		printf("\n\nMatriz simetrica!");
	}else{
		printf("Matriz nao simetrica!");
	}
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
int verSimetria(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(mat[i][j] != mat[j][i]){
				return 0;
			}
		}
	}
	return 1;
	// O código abaixo não verifica exatamente se a matriz é simétrica, apenas se preocupa com o numero de L e C.
	// SOMENTE O numero de L e C serem iguais não determina de uma matriz é simétrica ou não.
	//Portanto, para verificar simetria é necessario ver se os numeros nas linhas correspondem nas colunas
	/*
	123
	234
	345
	*/
	/*int i,j, cont=0, cont2=0,aux;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			cont2++;
			aux = 0;
		}
		if(cont2 > aux){
			aux = cont2;
		}
		cont2 = 0;
		cont++;
	}
	
	
	if(cont == aux){
		return 1;
	}else{
		return 0;
	}*/
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
