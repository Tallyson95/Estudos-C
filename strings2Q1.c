#include <stdio.h>
/*Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.*/
void main(){
	char s1[20] = "tatiana";
	int result = caracteresDistintos(s1);
	printf("O numero de caracteres distintos em [%s] eh:  %d",s1, result);
}
int caracteresDistintos(char s1[]){
	int i, j, cont = 0, diferentes;
	for(i=0;s1[i] != '\0';i++){
		diferentes = 1;
		for(j=0;j<i;j++){
			if(s1[i] == s1[j]){
				diferentes = 0;
			}
		}
		if(diferentes == 1){
			cont++;
		}
	}
	return cont;
}

