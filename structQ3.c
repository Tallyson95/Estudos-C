#include <stdio.h>
/*Considere a existência de um vetor de structs
com quant posições, onde cada uma destas
armazena os seguintes dados sobre os
funcionários de uma empresa: matricula (int),
nome (string), gênero (char) e salário (float).
Pede-se uma função que, dado um gênero,
desloque todos os funcionários deste gênero
para o início do vetor (e, consequentemente, os
funcionários do outro gênero ficarão ao final do
conjunto).*/
#define tam 4
typedef struct{
	int matricula;
	char nome[30];
	char genero;
	float salario;
}TFuncionario;
void main(){
	TFuncionario vetFuncio[tam];
	preencherDados(vetFuncio, tam);
	int i;
	char genero = 'm';
	for (i = 0; i < tam; i++) {
        printf("Nome: %s\nGenero: %c\nMatricula: %d\nSalario: %.2f\n\n",
        vetFuncio[i].nome, vetFuncio[i].genero, vetFuncio[i].matricula, vetFuncio[i].salario);
	}

	deslocarGenero(vetFuncio, tam, genero);
	printf("\n\n\n\nApos o deslocamento: \n");
	for (i = 0; i < tam; i++) {
        printf("Nome: %s\nGenero: %c\nMatricula: %d\nSalario: %.2f\n\n",
        vetFuncio[i].nome, vetFuncio[i].genero, vetFuncio[i].matricula, vetFuncio[i].salario);
	}

}
void preencherDados(TFuncionario vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		fflush(stdin);
		printf("Nome: ");
		//gets(vetor[i].nome);
		printf("\nGenero em letra minuscula [f / m]: ");
		scanf("%c", &vetor[i].genero);
		printf("\nMatricula: ");
		scanf("%d", &vetor[i].matricula);
		printf("\nSalario: ");
		scanf("%f", &vetor[i].salario);
		printf("\n");
	}
	
}
void deslocarGenero(TFuncionario vetor[], int tamanho, char genero){
    int i, j;
    TFuncionario vetAux;
    for (i=0;i<tamanho;i++){
        for (j=i+1;j<tamanho;j++){
            if ((vetor[i].genero != genero) && (vetor[j].genero == genero)){
                vetAux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = vetAux;
            }
        }
	}
}


