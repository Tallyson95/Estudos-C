/*QUESTÃO 06:
Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
por alguns meses do ano. Ou seja, uma
matriz de 3 linhas (uma por funcionário) e 3 colunas
(3 para cada mês). Pede-se o desenvolvimento
de uma função para cada item abaixo:

a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário,
determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo
usuário, determinar o total vendido por ele
durante o ano;
d. Determinar o mês com maior índice de
vendas;
e. Determinar o funcionário que menos
vendeu durante o ano.*/
#include <stdio.h>
#define lin 3
#define col 3
int matFuncionarios(int mat[lin][col], int *b, int *c, int *d, int *e);
void exibirMat(int mat[lin][col]);
void main(){
	int mat[lin][col] = {100,2,3,4,50,6,7,8,9};
	int result,b = 2, c = 0, d, aux = b, funcio = c, e;
	exibirMat(mat);
	result = matFuncionarios(mat,&b, &c,&d,&e);
	printf("\n\nO total vendido no Ano: %d   \n\nTotal vendido no mes [%d] eh: %d", result,aux, b);
	printf("\n\nO funcionario [%d] vendeu: %d \n\nO mes com maior numero de vendas foi: %d",funcio,c,d);
	printf("\n\nO funcionario com menor venda foi: %d",e);
}

int matFuncionarios(int mat[lin][col], int *b, int *c, int *d, int *e){
	int i, j, total = 0, totalMes = 0, totalAnoFuncio = 0;
	int maiorVenda = 0, aux = 0, mesMaiorVenda;
	int menosVendeu = -9999, menorVenda, k = 0, temp = 0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			total +=  mat[i][j];
		}
	}

	
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(j == *b){
				totalMes += mat[i][j];
			}
		}
	}

	for(i=*c;i<lin;i++){
		for(j=0;j<col;j++){
			if(i == *c){
				totalAnoFuncio += mat[i][j	];
			}
		}
	}
	
	for(j=0;j<col;j++){
		for(i=0;i<lin;i++){
			aux += mat[i][j];
		}
		if(aux > maiorVenda){
				maiorVenda = aux;
				aux = 0;
				mesMaiorVenda = j;
				
			}else{
				maiorVenda = maiorVenda;
				aux = 0;
			}
	}
	aux=0;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			aux += mat[i][j];
			temp += mat[i+1][j+1];
		}
		if(aux < temp){
			aux = 0;
			temp = temp;
			aux = 0;
			menorVenda = k;
		}else{
			aux = 0;
			temp = aux;
			k++;
		}
	}
	
	

	
	*b = totalMes;
	*c = totalAnoFuncio;
	*d = mesMaiorVenda;
	*e = menorVenda;
	return total;
}
void exibirMat(int mat[lin][col]){
	int i, j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			
			printf("%20d", mat[i][j]);
		}
		printf("\n");
	}
}
