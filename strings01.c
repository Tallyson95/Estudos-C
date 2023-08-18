#include <stdio.h>


/*void main(){
	char nome[100];
	char sobrenome[20];
	printf("Nome: ");
	scanf("%s",&nome);
	printf("Sobrenome: ");
	scanf("%s",&sobrenome);
	printf("\n\nSeu nome eh: %s %s", nome,sobrenome);
}*/
#include <stdio.h>


void main(){
	char nome[100];
	int result;
	printf("Insira uma string: ");
	scanf("%s", &nome);
	result = contChar(nome);	
	printf("Total de %d letra(s)", result);
}
int contChar(char string[]){
	int i = 0, j =1, cont;
	while(string[i] != '\0'){
		i++;
	}
	return i;
}
