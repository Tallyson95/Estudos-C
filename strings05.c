#include <stdio.h>

void main(){
	char s1[10], s2[10] = "ceu";
	copiar(s1,s2);
	printf("String original: %s \n\nString copiada: %s", s2,s1);
}

void copiar(char str1[], char str2[]){
	int i = 0;
	while(str2[i] != '\0'){
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}
