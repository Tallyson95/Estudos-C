#include <stdio.h>

/*02: Escreva um algoritmo que, dada a idade de um nadador, classifique-o em uma das categorias a seguir:

Infantil A 0-4 anos.
InfantilB 5-7 anos.
Infantil C 8-10 anos.
Juvenil A 11-13 anos.
Juvenil B 14-17 anos.
Adulto 18 anos ou mais.
*/                     

void main(){
	char nome [100]; 
	printf("Ola, digite o seu nome: ");
	scanf("%s", &nome);
	int idade;
	printf("Agora digite a sua idade: ");
	scanf("%d", &idade);
	if(idade <5){
		printf("A categoria de %s ", nome);
		printf("eh INFANTIL A");
	}else{
		if(idade < 8){
			printf("A categoria de %s ", nome);
		    printf("eh INFANTIL B");
		}else{
			if(idade < 11){
				printf("A categoria de %s ", nome);
		        printf("eh INFANTIL C");
			}else{
				if(idade < 14){
					printf("A categoria de %s ", nome);
		            printf("eh JUVENIL A");
				}else{
					if(idade < 18){
						printf("A categoria de %s ", nome);
		                printf("eh JUVENIL B");
					}else{
						printf("A categoria de %s ", nome);
		                printf("eh ADULTO");
					}
				}
			}
		}
	}	
}                     
