/*Questão 01 [2,5 pontos]:
O Cadastro Nacional de Pessoas Jurídicas (CNPJ) associa
a cada empresa um código no formato
XX.XXX.XXX/YYYY-ZZ, onde:
 XX.XXX.XXX: representa a inscrição;
 YYYY: indica se é matriz ou filial. No caso de ser
matriz, YYYY será igual a 0001;
 ZZ: dígitos verificadores.
Desenvolver uma função em C que receba uma string
representando um CNPJ e retorne: a inscrição (string),
a sequência que representa a matriz ou o número da
filial (string), além da informação (nº inteiro) se o
código representa uma matriz (1) ou uma filial (0) e,
por último, os dígitos verificadores (string)
*/
#include <stdio.h>
#include <string.h>
char removerChar(char str[], char remover);
int retornaCnpj(char str[],int tamanho, char inscricao[], char filMat[], char codVeri[]);
void main(){
	int tam = 18;
	char cnpj[] = "14.356.774/0001-45"; //14356774 0001 45
	char ponto = '.';
	char barra = '/';
	char traco = '-';
	char inscricao[6], filMat[4], codVerif[2];
	removerChar(cnpj, ponto);
	removerChar(cnpj, barra);
	removerChar(cnpj, traco);
	
	char str[14];
	strcpy(str, cnpj);
	
	
	int result2 = retornaCnpj(str, tam, inscricao, filMat, codVerif);
	if(result2 == '1'){
		printf("Numero de inscricao: %s", inscricao);
	    printf("\nNumero da Matriz: %s", filMat);
	    printf("\nCodigo de verificacao: %s", codVerif);
	}else{
		printf("Numero de inscricao: %s", inscricao);
	    printf("\nNumero da Filial: %s", filMat);
	    printf("\nCodigo de verificacao: %s", codVerif);
	}
	
	
}
int retornaCnpj(char str[],int tamanho, char inscricao[], char filMat[], char codVeri[]){
	int i, j = 0, k =0 , l =0;
	char aux;
	str[14] = '\0';
	for(i=0;i<=7;i++){
		inscricao[i] = str[i];
	}
	inscricao[i] = '\0';
	
	for(i=8;i<=11;i++){
		filMat[j] = str[i];
		j++;
		
	}
	
	filMat[j] = '\0';
	aux = str[j-1];
	for(i=12;i<=13;i++){
		codVeri[k] = str[i];
		k++;
	}
	codVeri[k] = '\0';
	if(aux == '1'){
		return 1;
	}else{
		return 0;
	}
}

char removerChar(char str[], char remover){
	int i = 0, j;
	while(str[i]){
		if(str[i] == remover){
			for(j = i; str[j]; j++){
				str[j] = str[j+1];
			}
		str[j] = '\0';
		}else{
			i++;
		}
	}
	return str;
}
