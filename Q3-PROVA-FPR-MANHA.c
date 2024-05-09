/*Considere que o sistema acadêmico de uma instituição
de ensino gerencie algumas informações sobre
professores e disciplinas da seguinte forma:
i. Um vetor de tamanho x que armazene, em cada
uma de suas posições, o código e o nome de um
professor;
ii. Um vetor de tamanho y que armazene, em cada
uma de suas posições, o código e o nome de
uma disciplina;
iii. Um vetor de tamanho z que represente a
relação entre professor e disciplina ministrada,
armazenando em cada uma de suas posições o
código do professor, o código da disciplina e o semestre/ano que o docente ministrou tal
disciplina.
Pede-se uma função que, a partir destes vetores, exiba,
para cada professor (o seu nome deve ser
apresentado), a lista com os nomes das disciplinas que
já ministrou (sem repetições).
*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    int codigoProf;
} TProf;

typedef struct {
    char nome[30];
    int codigoDisc;
} TDisciplina;

typedef struct {
    int codigoProf;
    int codigoDisc;
    char semestre[30];
} TRelacao;

void preencherDados(TProf professores[], int tam1, TDisciplina disciplinas[], int tam2, TRelacao relacao[], int tam3);
void funcRelacao(TProf prof, int tam1, TDisciplina disci, int tam2, TRelacao relacao1, int tam3);
void MostrarRelacao(TProf professores[], int tam1, TDisciplina disciplinas[], int tam2, TRelacao relacao[], int tam3);

void main() {
    TProf professores[2];
    TDisciplina disciplinas[2];
    TRelacao relacao[4];
    preencherDados(professores, 2, disciplinas, 2, relacao, 4);
    funcRelacao(professores, 2, disciplinas, 2, relacao, 4);
    exibirDisciplinasMinistradas(professores, 2, disciplinas, 2, relacao, 4);
    
}

void funcRelacao(TProf prof, int tam1, TDisciplina disci, int tam2, TRelacao relacao1, int tam3){
    int i, j, k;

    for (i=0;i<tam1;i++) {
        for (j=0;j<tam3;j++) {
            if (relacao1[j].codigoProf == prof[i].codigoProf) {
                int codigoDisc = relacao1[j].codigoDisc;
                for (k=0;k<tam2;k++) {
                    if (disci[k].codigoDisc == codigoDisc) {
                        printf("Professor: %s \n Disciplina: %s", prof[i].nome, disci[k].nome);
                        printf("\n\n");
                    }
                    break;
                }
            }
        }
    }
}

void preencherDados(TProf professores[], int tam1, TDisciplina disciplinas[], int tam2, TRelacao relacao[], int tam3) {
    int i;
    for (i=0;i<tam1;i++) {
        fflush(stdin);
        printf("Nome do prof: ");
        gets(professores[i].nome);
        printf("Codigo do prof: ");
        scanf("%d", &professores[i].codigoProf);
    }

    for (i=0;i<tam2;i++) {
        fflush(stdin);
        printf("Nome da disciplina: ");
        gets(disciplinas[i].nome);
        printf("Codigo da disciplina: ");
        scanf("%d", &disciplinas[i].codigoDisc);
    }

    for (i=0;i<tam3;i++) {
        printf("Codigo do professor que ministra a disciplina: ");
        scanf("%d", &relacao[i].codigoProf);
        printf("Codigo da disciplina ministrada: ");
        scanf("%d", &relacao[i].codigoDisc);
        fflush(stdin);
        printf("Semestre/ano: ");
        gets(relacao[i].semestre);
    }
}

void mostrarRelacao(TProf professores[], int tam1, TDisciplina disciplinas[], int tam2, TRelacao relacao[], int tam3) {
    printf("Disciplinas e seus respectivos professores:\n");
    funcRelacao(professores, tam1, disciplinas, tam2, relacao, tam3);
}

