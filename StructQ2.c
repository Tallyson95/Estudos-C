/*Questão 02:
Suponha a existência de um vetor de tamanho
TAM, cada posição armazenando o nome da
pessoa e a sua data de aniversário
(representada por um struct do tipo TData,
contendo os campos dia e mes). Pede-se o
desenvolvimento das seguintes funções:
? Determinar a quantidade de pessoas que
fazem aniversário no mês M;
? Exibir os nomes de todas pessoas que fazem
aniversário entre as datas d1 e d2, ambas
do tipo TData.*/
#include <stdio.h>
#define tam 2
typedef struct{
	int dia;
	int mes;
}TData;

typedef struct{
	char nome[20];
	TData data;
}TPessoa;
int aniversarianteMes(TPessoa vetPessoas[], int tamanho, int mes);
void exibirNomes(TPessoa vetPessoas[], int tamanho, TData d1, TData d2 );
int verificarDatasIntervalo(TData d1, TData d2, TData data);
void lerDados(TPessoa vetPessoas[], int tamanho);
int main(){
	TPessoa vetPessoas[tam];
	TData d1, d2;
	lerDados(vetPessoas, tam);
	
	int result;
	result = aniversarianteMes(vetPessoas, tam, 3);
	printf("O numero de aniversariantes no mes %d eh:  %d\n", 3, result);
	d1.dia = 26;
	d1.mes = 3;
	d2.dia = 7;
	d2.mes = 9;
	exibirNomes(vetPessoas, tam, d1, d2 );
	return 0;
}
int aniversarianteMes(TPessoa vetPessoas[], int tamanho, int mes){
	int i, cont = 0;
	for(i=0;i<tamanho;i++){
		if(vetPessoas[i].data.mes == mes){
			cont++;
		}
	}
	return cont;
}
void exibirNomes(TPessoa vetPessoas[], int tamanho, TData d1, TData d2 ){
	int i;
	for(i=0;i<tamanho;i++){
		
		if(verificarDatasIntervalo(d1,d2,vetPessoas[i].data) == 1){
			printf("\n\nNomes: %s\n\n", vetPessoas[i].nome);
		}
	}
}
int verificarDatasIntervalo(TData d1, TData d2, TData data){
	if((data.mes > d1.mes) && (data.mes < d2.mes)){
			return 1;
		}else{
			if((data.mes == d1.mes) && (data.dia >= d1.dia)){
				return 1;
			}else{
				if(data.mes == d2.mes && data.dia <= d2.dia){
					return 1;
				}
			}
		}
		return 0;
}


void lerDados(TPessoa vetPessoas[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        fflush(stdin);
        printf("Nome: ");
        gets(vetPessoas[i].nome);
        printf("\n\nData do Aniversario (dia/mês): ");
        scanf("%d / %d", &vetPessoas[i].data.dia, &vetPessoas[i].data.mes);
    }
}



