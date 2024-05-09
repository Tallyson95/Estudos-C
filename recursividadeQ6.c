/*Questão 06:
Dada uma string s, desenvolver uma função
recursiva que determine se s é ou não um
palíndromoa.*/
#include <stdio.h>
void main(){
	char s1[10] = "area";
	int strTam = strlen(s1);
	int i = 0;
	int result = polindromoRecursivo(s1, i, strTam-1);
	printf("%d", result);
}
int polindromoRecursivo(char s1[],int i, int strTam){
	if(i>=strTam){
		return 1;
	}
	if(s1[i] != s1[strTam] && s1[i]){
		return 0;
	}
		polindromoRecursivo(s1,i+1,strTam-1);

	
}
