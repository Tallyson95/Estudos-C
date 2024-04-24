#include <stdio.h>
#include <string.h>
/*Questão 06:
Dada uma string s, desenvolver uma função
recursiva que determine se s é ou não um
palíndromo.*/
int palindromoRec(char string[], int i, int tam);
int main(){
	char string[10] = "anna";
	int tam = strlen(string)-1;
	int result = palindromoRec(string, 0, tam);
	printf("%d", result);
	return 0;
}

int palindromoRec(char string[], int i, int tam){
	if(string[i] == string[tam] && tam > i ){
		return palindromoRec(string, i+1, tam-1);
	}else{
		return 0;
	}
	return 1;
}
