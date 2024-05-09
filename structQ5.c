/*Questão 05:
O histórico de um aluno é representado por um
vetor de structs onde cada posição armazena o
código da disciplina cursada, semestre e ano
que a cumpriu e a média final na disciplina.
Implementar uma função que exiba o histórico
do aluno com o seguinte formato:
NomeDisciplina1 (código1) MédiaDisciplina1
NomeDisciplina2 (código2) MédiaDisciplina2

NomeDisciplinaN (códigoN) MédiaDisciplinaN
Coeficiente de rendimento: CR
Observações:
1. Para obter os dados da disciplina, um outro
vetor de structs deve ser consultado. Este,
por sua vez, armazena para cada disciplina
do curso as seguintes informações: código,
nome e número de créditos;
2. O coeficiente de rendimento consiste em
uma média ponderada de todos os graus
atribuídos às disciplinas cursadas, onde os
pesos são representados pelo número de
créditos da disciplina;
3. Todos os dados em negrito apresentados no
formato do histórico devem ser obtidos a
partir dos vetores.*/
#include <stdio.h>
#define tam 3
typedef struct{
	char nomeDisciplina[50];
	char codigo[10];
	int creditos;
}TDisciplinas;
typedef struct{
	char codigoDisciplina[10];
	int ano;
	int semestre;
	float mediaDisciplina;
	float cr;
	TDisciplinas disciplinas;
}THistorico;
void preencherDados(THistorico vetHistorico[], int tamanho);
void criarHistorico(THistorico vetHistorico[], int tamanho);
void main(){
	THistorico vetHistorico[tam];
	preencherDados(vetHistorico, tam);
	criarHistorico(vetHistorico,tam);
}
void preencherDados(THistorico vetHistorico[], int tamanho){
	int i, cont = 1;
	char resp;
	for(i=0;i<tamanho;i++){
		fflush(stdin);
		printf("Informe o nome da disciplina %d: ", cont);
		gets(vetHistorico[i].disciplinas.nomeDisciplina);
		fflush(stdin);
		printf("Codigo da Disciplina %s: ", vetHistorico[i].disciplinas.nomeDisciplina);
		gets(vetHistorico[i].codigoDisciplina);
		printf("Informe o numero de creditos da disciplina ");
		scanf("%d", &vetHistorico[i].disciplinas.creditos);
		printf("Ano que cursou a disciplina %s: ", vetHistorico[i].disciplinas.nomeDisciplina);
		scanf("%d", &vetHistorico[i].ano);
		printf("Semestre que cursou [1 / 2]: ");
		scanf("%d", &vetHistorico[i].semestre);
		printf("Informe a media final da disciplina: ");
		scanf("%f", &vetHistorico[i].mediaDisciplina);
		printf("\n\n");
		cont++;
	}
}
void criarHistorico(THistorico vetHistorico[], int tamanho){
	int i, cont = 0;
	float media = 0;
	for(i=0;i<tamanho;i++){
		printf("%s (%s) media: %.2f", vetHistorico[i].disciplinas.nomeDisciplina, vetHistorico[i].codigoDisciplina, vetHistorico[i].mediaDisciplina);
		cont+= vetHistorico[i].disciplinas.creditos;
		media = media + (vetHistorico[i].mediaDisciplina * vetHistorico[i].disciplinas.creditos);
		printf("\n\n");
	}
	media/=cont;
	printf("O CR do aluno eh: %.2f", media);
}
