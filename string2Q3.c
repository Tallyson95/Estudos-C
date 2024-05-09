/*Desenvolver uma função, em C, que, dada uma
string s e dada uma posição p desta string, crie duas
novas strings: s1 com os caracteres de s das
posições 0 a p-1; e s2 com os caracteres de s da
posição p à última.
Nota: Caso p seja uma posição inválida, a função
deverá retornar o valor 0; caso contrário,
procederá com a criação das duas strings e
retornará o valor 1.*/
#include <stdio.h>
int criarStrings(int p, char s[], char s1[], char s2[]);
int main(){
	char s[20] = "tallyson";
	char s1[20];
	char s2[20];
	int p = 7;
	int result = criarStrings( p, s, s1, s2);
	if(result == 1){
		printf("%d: String original: %s\n\nString 1: %s \n\nString 2: %s ", result, s,s1,s2);
	}else{
		printf("%d: O valor definido para P eh invalido!", result);
	}
	return 0;
}

int criarStrings(int p, char s[], char s1[], char s2[]){
	if(p >= 0 && p < strlen(s)){
		int i;
		int j = 0, k = 0;
		for(i=0;i< strlen(s);i++){
		if(i < p){
		    s1[i] = s[i];
		}
		if(j >= p && j < strlen(s)){
			s2[k] = s[i];
			k++;
		}
		j++;
	}
	s1[i] = '\0';
	s2[k] = '\0';
	return 1;
	}else{
		return 0;
	}
	
}
