#include <stdio.h>

void main(){
	char texto[100];
	int i = 0;
	char caracter;
	
	
	do{
		caracter = getchar();
		texto[i] = caracter;
		i++;
	}while(caracter != '\n');
	texto[i-1] = '\0';
	printf("Digite: ");
	scanf("%s", &texto);
	printf("%s", texto);
	
}

