#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Incluindo a biblioteca para usar a função toupper

const int tam = 4;  // Definir o tamanho como uma constante

typedef struct {
    char nome[20];
    char genero;
    int idade;
} TPessoa;

int retornarCandidato(TPessoa vetPessoas[], int tam, char genero) {
    int melhor_posicao = -1;
    int menor_idade = -1;
    char primeiro_nome[20] = "";

    int i;

    // Convertendo o gênero para maiúscula para comparar corretamente
    char genero_maiusculo = toupper(genero);

    for (i = 0; i < tam; i++) {
        // Convertendo o gênero do vetor para maiúscula para comparar corretamente
        char genero_vetor_maiusculo = toupper(vetPessoas[i].genero);

        if (genero_vetor_maiusculo == genero_maiusculo) {
            if (melhor_posicao == -1 ||
                vetPessoas[i].idade < menor_idade ||
                (vetPessoas[i].idade == menor_idade && strcmp(vetPessoas[i].nome, primeiro_nome) < 0)) {
                melhor_posicao = i;
                menor_idade = vetPessoas[i].idade;
                strcpy(primeiro_nome, vetPessoas[i].nome);
            }
        }
    }

    return melhor_posicao;
}

int main() {
    TPessoa vetPessoas[tam];

    // Preencher os dados dos entrevistados
    strcpy(vetPessoas[0].nome, "Tallyson");
    vetPessoas[0].genero = 'M';
    vetPessoas[0].idade = 26;

    strcpy(vetPessoas[1].nome, "Tallyson");
    vetPessoas[1].genero = 'M';
    vetPessoas[1].idade = 26;

    strcpy(vetPessoas[2].nome, "Anderson");
    vetPessoas[2].genero = 'M';
    vetPessoas[2].idade = 47;

    strcpy(vetPessoas[3].nome, "Tatiana");
    vetPessoas[3].genero = 'F';
    vetPessoas[3].idade = 44;

    // Chamar a função retornarCandidato com o gênero desejado
    int posicao_candidato = retornarCandidato(vetPessoas, tam, 'm');

    // Verificar se encontrou um candidato e imprimir a posição
    if (posicao_candidato != -1) {
        printf("Posicao do candidato escolhido: %d\n", posicao_candidato);
    } else {
        printf("Nenhum candidato do genero especificado encontrado.\n");
    }

    return 0;
}

