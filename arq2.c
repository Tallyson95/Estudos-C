/*Desenvolver uma função que, dado um arquivo
texto, verifique o número de vezes que um
determinado caracter aparece no arquivo.*/
#include <stdio.h>
int determinarRep(char arq[], char caracter);
void main(){
	char nomeArq[30] = "teste2.txt";
	char caracter = 'a';
	int result = determinarRep(nomeArq, caracter);
	printf("%d", result);
}

int determinarRep(char nomeArq[], char caracter){
	FILE* arq = fopen(nomeArq, "r");;
	
	char c;
	int cont = 0;
	
	if(!arq){
		return -1;
	}else{
		while(fscanf(arq, "%c", &c) != EOF){
			if(caracter == c){
				cont++;
			}
		}
		fclose(arq);
		return cont;
	}
	
}
