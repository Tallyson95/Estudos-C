#include <stdio.h>
/*Desenvolver uma função que, dados um
vetor de inteiros vet e um número num,
determine se todos os valores de vet são
múltiplos de num. Caso todos sejam, o valor
1 deverá ser retornado; caso contrário, 0.*/
#define TAM 6
int multiplos(int num, int vet[], int tamanho);
void main(){
	int num = 5, vet [TAM]= {5,15,20,10,30,25};
	//vet[5] = 1; coloquei o 1 na ultima posição do vetor para testar o retorno 0
	
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
