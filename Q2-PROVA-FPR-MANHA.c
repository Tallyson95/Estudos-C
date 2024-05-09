/*O conceito de matriz simétrica baseia-se na verificação
se o elemento aij é igual a aji, para todos os possíveis
valores de i e j. Desta forma, podemos afirmar que a
simetria é observada em relação à diagonal principal.
Neste contexto, pede-se a implementação de uma
função que, dadas uma matriz M e a sua ordem1 n,
determine se M é simétrica em relação à diagonal
secundária (e retorne 1 se for ou 0, caso contrário).
*/
#include <stdio.h>
#define lin 3
#define col 3

void main() {
    int mat[lin][col] = {10, 5, 7, 8, 3, 5, 1, 8, 10};
    int result = verificarSimetria(mat);
    
    if (result == 1) {
        printf("A matriz eh simetrica!");
    } else {
        printf("A matriz nao eh simetrica!");
    }  
}

int verificarSimetria(int mat[lin][col]) {
    int i, j;
    	/*
	{ 10  5  7
	  8   3  5
	  1   8  10
	*/
    
    for (i=0;i<lin;i++) {
        for (j=0;j<col;j++){
            if ( (mat[j][i] == mat[lin+1+j][col+1+i]) && ((mat[i][j] != mat[lin-1-j][col-1-i]) ){
                return 0;
            }else{
            	break;
			}
        }
    }
    return 1;
}
