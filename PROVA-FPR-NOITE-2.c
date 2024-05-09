/*Questão 01 [2,5 pontos]:
Implementar uma função que, dadas duas strings s1 e
s2, determine se s2 possui (retornando 1) ou não
(retornando 0) os mesmos caracteres de s1, na mesma
quantidade, mesmo que embaralhados.
*/

#include <stdio.h>
compararCaracter(char s1[], char s2[]);
int main(){
	char s1[30] = "aa";
	char s2[30] = "aba";
	int result = compararCaracter(s1,s2);
	printf("%d", result);
	return 0;
}
int compararCaracter(char s1[], char s2[]){
	int i, j, iguais, cont = 0;
	if( (strlen(s1)-1) != (strlen(s2)-1)){
		return 0;
	}else{
		for(i=0;s2[i] != '\0';i++){
			iguais = 0;
			for(j=0; s1[j] != '\0';j++){
				if(s2[i] == s1[j]){
					iguais = 1;
					break;
				}
			}
			if(iguais == 1){
				cont++;
			}
		}
	}
	if(cont == strlen(s1)){
		return 1;
	}
}
