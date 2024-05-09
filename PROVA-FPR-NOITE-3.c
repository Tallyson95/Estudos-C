/*Questão 03 [2,5 pontos]:
Fazer uma função que, dada uma string contendo
apenas letras e separadores (espaços, vírgulas, pontos,
etc.), crie um vetor de structs no qual cada posição
conterá: uma palavra da string, a quantidade de vogais
e a quantidade de consoantes nesta palavra.

Exemplo:
         S = “FUNDAMENTOS DE PROGRAMACAO”

palavras --> FUNDAMENTOS DE PROGRAMACAO
vogais -->     4 1 5
consoantes --> 7 1 6*/

#include <stdio.h>
typedef struct{
	char palavra[200];
	int consoantes;
	int vogais;
}TPalavra;
void main(){
	char string[200] = "fundamentos de programacao";
	TPalavra s[200] = {0};
	int i, j;
	int result = preencherPalavra(string, s);
	printf("%d \n\n\n\n\n", result);
	for(i=0, j =0; i < result ;i++){
		printf("Palavra: %s \n", s[i].palavra);
		printf("Consoantes: %d \n", s[i].consoantes);
		printf("Vogais: %d \n", s[i].vogais);
		printf("\n\n");
	}
}

int preencherPalavra(char string[], TPalavra s[]){
	int i, j , k =0, l =0, booleano, cont = 0;
	for(i=0, j =0; i<(strlen(string)); i++){
		if(string[i] >= 'A' && string[i] <= 'z'){
			if(string[i] == 'a' ||string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
				s[j].vogais++;
			}else{
				s[j].consoantes++;
			}
			s[j].palavra[k] = string[i];
			k++;
			booleano = 1;
			l=i;
			if(string[l+1] >= 'A' && string[l+1] <= 'z'){
				booleano = 0;
				l++;
			}
		}else{
			k=0;
			if((string[i] < 'A' || string[i] > 'z')){
				booleano = 0;
			}
			j++;
		}
		if(booleano == 1){
			cont++;
		}
	}
	return cont;
}



/*//DEFINIÇAO DE TIPO(STRUCT)

typedef struct{
	char palavra[64];
	int vogal,
	consoante;
}TDataWord;


//PROTOTIPO DAS FUNÇÕES
void tipoLetra(char s1[], TDataWord word[]);

void main(){
	
	int i;
	
	char s1[] = "FUNDAMENTOS DE PROGRAMACAO";
	TDataWord palavra[100] = {0};
	
	tipoLetra(s1, palavra);

	for (i = 0; palavra[i].palavra[0] != '\0'; i++) {
        
            printf("Palavra: %s\n", palavra[i].palavra);
            printf("Vogais: %d\n", palavra[i].vogal);
            printf("Consoantes: %d\n\n", palavra[i].consoante);
        }
}

void tipoLetra(char s1[], TDataWord word[]){
    int i, j, k;

    for(j = 0; s1[j]; j++) {
        s1[j] = toupper(s1[j]);
    }
    
    for(i = 0, j = 0, k = 0; s1[i]; i++){
    	
        if(s1[i] >= 'A' && s1[i] <= 'z'){
            if(s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U'){
                word[j].vogal++;
            }else{
                word[j].consoante++;
            }
            word[j].palavra[k] = s1[i];
            k++;
        }else{
        	if(word[j].palavra[k-1] >= 'A' && word[j].palavra[k-1] <= 'z' && k-1 >=0){
        		k = 0;
            	j++;
			}
        }        
    }
}*/
