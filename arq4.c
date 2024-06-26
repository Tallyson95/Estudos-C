#include <stdio.h>
/* Questão 04:
   Desenvolver uma função que, dado um arquivo texto contendo 
   números, determine se estes encontram-se ordenados crescentemente.*/

void main(){
	char nome[30] = "teste2.txt";
	int result = determinarOrdem(nome);
	if(result == 1){
		printf("Arquivo ordenado crescendemente.");
	}else{
		printf("Arquivo desordenado.");
	}
}

int determinarOrdem(char nome[]){
	FILE* nomeArq = fopen(nome, "r");
	int numAnterior = -999999;
	int numeroAtual = 0;
	
	if(!nomeArq){
		return -1;
	}else{
		while(fscanf(nomeArq, "%d", &numeroAtual) != EOF){
			if(numeroAtual < numAnterior){
				fclose(nomeArq);
				return 0;
			}
			numAnterior = numeroAtual;
			
		}
		fclose(nomeArq);
		return 1;
	}
}
