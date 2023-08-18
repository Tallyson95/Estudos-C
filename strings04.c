#include <stdio.h>
int compararOrdem(char string1[], char string2[]);
void main(){
	char nome1[10], nome2[10];
	int result;
	printf("Digite o primeiro nome: ");
	scanf("%s", nome1);
	printf("Digite o segundo nome: ");
	scanf("%s", nome2);
	result = compararOrdem(nome1,nome2);
	
	if(result < 0){
		printf("O nome %s vem antes de %s", nome1,nome2);
		printf("\n\n%d", result);
	}else{
		if(result == 0){
			printf("Os nomes %s e %s estao na mesma ordem pois sao iguais", nome1, nome2);
			printf("\n\n%d", result);
		}else{
			printf("O nome %s vem antes de %s", nome2, nome1);
			printf("\n\n%d", result);
		}
	}
	
	
	
}

int compararOrdem(char string1[], char string2[]){
	int i = 0;
	while(string1[i] != '\0' && string2[i] != '\0' && string1[i] == string2[i]){
		i++;
	};
	return string1[i] - string2[i];
}
