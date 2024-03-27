#include <stdio.h>
/*Dada uma matriz MLxC, onde L e C s�o constantes, 
desenvolver uma fun��o que verifique se os elementos da matriz est�o
ordenados de forma crescente. Para isto, as seguintes regras devem ser atendidas:
a. Os elementos de cada linha devem estar ordenados crescentemente 
(ou seja, cada elemento ser� maior ou igual
�quele da mesma linha, por�m da coluna anterior � caso exista);
b. O primeiro elemento de cada linha deve ser maior ou igual ao �ltimo da linha anterior (caso exista).
Caso a matriz M atenda aos crit�rios definidos, o valor 1 dever� ser retornado pela fun��o; caso contr�rio, 0.*/
#define lin 4
#define col 4
int determinarMatOrdenada(int mat[lin][col]);
void main(){
		int mat[lin][col] ={1, 2, 3, 3,
	                        3, 5, 6 ,6,
						    6, 8, 9, 9,
						    10,11,12,13};
		int result = determinarMatOrdenada(mat);
		printf("%d", result);
}

int determinarMatOrdenada(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=1;j<col;j++){
				if(mat[i][j] < mat[i][j-1]){
				return 0;
			}
			if(i > 0 && mat[i-1][col-1] > mat[i][0]){
				return 0;
			}
		}
	}
	return 1;
}
