/*Questão 02 [2,5 pontos]:
Dadas duas strings s1 e s2, implementar uma função
que verifique se todos os caracteres de s1 estão em s2.
Dependendo do resultado, os seguintes valores
deverão ser retornados:
0: nem todos os caracteres de s1 estão em s2;
1: todos os caracteres de s1 estão em s2, porém
não na mesma frequência;
2: todos os caracteres de s1 estão em s2, na
mesma frequência. 
*/
#include <stdio.h>
#include <string.h>

int compararCaracter(char s1[], char s2[]);
int main(){
	char s1[20] = "geky";
	char s2[20] = "gekyume";
	int result = compararCaracter(s1,s2);
	printf("%d", result);
	return 0;
}

int compararCaracter(char s1[], char s2[]){
	int i, j, diferentes, cont = 0;
	for(i=0;s1[i] != '\0';i++){
		diferentes = 0;
		for(j=0;s2[j] != '\0';j++){
			if(s1[i] == s2[j]){
				diferentes = 1;
				break;
			}
		}
		if(diferentes == 1){
			cont++;
		}
	}
	if(cont > 0 && cont < strlen(s1)){
		return 0;
	}
	cont = 0;
	for(i=0;s1[i] != '\0';i++){
		diferentes = 0;
		for(j=0;s2[j] != '\0';j++){
			if(s1[i] == s2[j]){
				diferentes = 1;
				break;
			}
		}
		if(diferentes == 1){
			cont++;
		}
	}
	if(strlen(s1) == cont){
		for(i=0; s1[i] != '\0';i++){
			diferentes = 1;
			if(s1[i] == s2[i]){
				diferentes = 0;
			}
			if(diferentes == 1){
				return 1;
			}
		}
	}
	return 2;
}

