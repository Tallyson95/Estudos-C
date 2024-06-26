/*Quest�o 03:
   Desenvolver uma fun��o que, dado um arquivo texto, verifique o 
   n�mero de letras existentes no mesmo (entendendo que no arquivo 
   podem existir letras, algarismos e s�mbolos).*/
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
