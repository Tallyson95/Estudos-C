/*Questão 03:
   Desenvolver uma função que, dado um arquivo texto, verifique o 
   número de letras existentes no mesmo (entendendo que no arquivo 
   podem existir letras, algarismos e símbolos).*/
#include <stdio.h>
int determinarRep(char arq[]);
void main(){
	char nomeArq[30] = "teste2.txt";
	char caracter = 'a';
	int result = determinarRep(nomeArq);
	printf("%d", result);
}

int determinarRep(char nomeArq[]){
	FILE* arq = fopen(nomeArq, "r")
	
	char c;
	int cont = 0;
	
	if(!arq){
		return -1;
	}else{
		while(fscanf(arq, "%c", &c) != EOF){
			if(c >= 'A' && c <= 'z'){
				cont++;
			}
		}
		fclose(arq);
		return cont;
	}
	
}
