#include <stdio.h>
/*Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.*/
void removerOcorrencia(char s[], char ocorrencia);

int main() {
    char s[50] = "tallyson";
    char ocorrencia = 'l';
    removerOcorrencia(s, ocorrencia);
    printf("%s", s);
    return 0;
}

void removerOcorrencia(char s[], char ocorrencia) {
    int i = 0, j;
    for (i=i, j = 0; s[i] != '\0'; i++) {
        if (s[i] != ocorrencia){
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}
