#include <stdio.h>
/*Desenvolver uma fun��o que, dados um
vetor de inteiros vet e um n�mero num,
determine se todos os valores de vet s�o
m�ltiplos de num. Caso todos sejam, o valor
1 dever� ser retornado; caso contr�rio, 0.*/
#define TAM 6
int multiplos(int num, int vet[], int tamanho);
void main(){
	int num = 5, vet [TAM]= {5,15,20,10,30,25};
	//vet[5] = 1; coloquei o 1 na ultima posi��o do vetor para testar o retorno 0
	
	if(multiplos(num, vet, TAM) == 1){
		printf("Todos os numeros do vetor sao multiplos de %d",num);
	}else{
		printf("Algum numero do vetor nao eh multiplo de %d", num);
	}
}

int multiplos(int num, int vet[], int tamanho){
	int i, cont = 0	;
	for(i=0;i<=tamanho;i++){
		if(vet[i] % num == 0){
			cont++;
		}
	}
	if(cont == TAM){
		return 1;
	}else{
		return 0;
	}
}
