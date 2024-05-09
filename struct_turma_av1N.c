#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[20];
    float av1;
    float av2;
} Taluno;

typedef struct {
    int matricula;
    char nome[20]; 
    float media;
    char situacao[10];
} TresultadoFinal;

void situacaoAluno(Taluno alunos[], int tam);

int main() {
    Taluno alunos[2];  

    // Inicialização dos alunos
    strcpy(alunos[0].nome, "Tallyson");
    alunos[0].matricula = 1000;
    alunos[0].av1 = 7;
    alunos[0].av2 = 8;

    strcpy(alunos[1].nome, "Anna");
    alunos[1].matricula = 1001;
    alunos[1].av1 = 4;
    alunos[1].av2 = 6;

    strcpy(alunos[2].nome, "Miguel");
    alunos[2].matricula = 1002;
    alunos[2].av1 = 3;
    alunos[2].av2 = 1;
    
    situacaoAluno(alunos, 3);  // Passando o tamanho correto do array

    return 0;
}

void situacaoAluno(Taluno alunos[], int tam) {
    TresultadoFinal vetResultados[tam];
    int i;
    
    for (i = 0; i < tam; i++) {
        vetResultados[i].matricula = alunos[i].matricula;
        strcpy(vetResultados[i].nome, alunos[i].nome);
        vetResultados[i].media = (alunos[i].av1 + alunos[i].av2) / 2;

        if (vetResultados[i].media >= 6) {
            strcpy(vetResultados[i].situacao, "Aprovado");
        } else{
        	if (vetResultados[i].media >= 4) {
            strcpy(vetResultados[i].situacao, "AVF");
            }else {
            strcpy(vetResultados[i].situacao, "Reprovado");
            }
		}
    }

    // Exemplo de impressão dos resultados
    printf("Resultados:\n");
    for (i = 0; i < tam; i++) {
        printf("Alunos %d -----\nMatricula: %d,\n Nome: %s,\n Media: %.2f,\n Situacao: %s\n\n\n",i,
               vetResultados[i].matricula, vetResultados[i].nome,
               vetResultados[i].media, vetResultados[i].situacao);
    }
}

