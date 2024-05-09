/*Questão 04 [2,5 pontos]:
Considerando a existência de um vetor, onde cada posição armazena os seguintes dados: nome do aluno, código da
disciplina, nota na AV1 e nota na AV2, pede-se o desenvolvimento de uma função que, dado um vetor nos moldes do
descrito, crie (e retorne) um outro vetor com os seguintes dados em cada posição: código da disciplina, status
(Aprovado, Reprovado ou Em AVF) e a quantidade de alunos nesta situação. 

Exemplo:
JOAO  PEDRO  MARIA  ANA  CARLOS PAULO KATIA SILVIA GLORIA ANTONIO
FAC    ESD   FPR    FAC   FAC   FPR   ESD   FAC   FPR   ESD
10,0   6,0   10,0   8,0   7,0   5,0   5,0   2,0   4,0   3,0
8,0   7,0   5,0     3,0   7,0   2,0   9,0   4,0   1,0   4,0 


   FAC     ESD F      PR    FAC     FPR       FAC        ESD
aprovado aprovado aprovado em AVF reprovado reprovado reprovado
    2       2        1      1        2         1         1 

*/
#include <stdio.h>
#define tam 2
typedef struct{
	char nome[30];
	char codigoDisciplina[30];
	float av1;
	float av2;
} TAluno;
typedef struct{
	char codigoDisciplina[30];
	char status[15];
	int quantAlunos;
}TStatus;
void preencherDados(TAluno vetor[], int tamanho);
void criarStruct(TAluno vet[], int tamanho, TStatus vetStatus[], int tamanho2);
void main(){
	TAluno alunos[tam];
	TStatus vetStatus[tam];
	preencherDados(alunos, tam);
	criarStruct(alunos, tam, vetStatus, tam);
	int i;
	for(i=0;i<tam;i++){
		printf("%s\n", alunos[i].nome);
		printf("%s\n", alunos[i].codigoDisciplina);
		printf("%.1f\n", alunos[i].av1);
		printf("%.1f\n", alunos[i].av2);
		printf("\n\n");
	}
	criarStruct(alunos, tam, vetStatus, tam);
	for(i=0;i<tam;i++){
		printf("%s\n", vetStatus[i].codigoDisciplina);
		printf("%s\n", vetStatus[i].status);
		printf("%d\n", vetStatus[i].quantAlunos);
		printf("\n\n");
	}
}
void preencherDados(TAluno vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		fflush(stdin);
		printf("Nome: ");
		gets(vetor[i].nome);
		printf("\nInforme o codigo da disciplina: ");
		scanf("%s", &vetor[i].codigoDisciplina);
		printf("\nNota da AV1 da disciplina %s: ", vetor[i].codigoDisciplina);
		scanf("%f", &vetor[i].av1);
		fflush(stdin);
		printf("\nNota da AV2 da disciplina %s: ", vetor[i].codigoDisciplina);
		scanf("%f", &vetor[i].av2);
		printf("\n\n");
	}
}
void criarStruct(TAluno vet[], int tamanho, TStatus vetStatus[], int tamanho2){
	int i, j = 0, k = 0, l  = 0;
	float n1, n2, media;
	for(i=0;i<tamanho;i++){
		strcpy(vetStatus[i].codigoDisciplina, vet[i].codigoDisciplina);
		n1 = vet[i].av1;
		n2 = vet[i].av2;
		media = (n1 + n2) / 2;
		if(media >=6){
			strcpy(vetStatus[i].status, "APROVADO");
			vetStatus[i].quantAlunos = j++;
		}else{
			if(media>=4){
				strcpy(vetStatus[i].status, "AVF");
				vetStatus[i].quantAlunos = k++;
			}else{
				strcpy(vetStatus[i].status, "REPROVADO");
				vetStatus[i].quantAlunos = l++;
			}
		}
	}
}

