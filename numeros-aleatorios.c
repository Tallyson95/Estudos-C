#include <stdio.h>

//criando um vetor com numeros aleatorios de 0 a 99

#define TAM 5 //definindo constante
void main(){
	int vet[TAM], i; //declarando variaveira
	srand(time(NULL));//pegando hora do sistema para gerar numeros
	for(i=0;i<TAM;i++){
		vet[i] = rand()%100; //pegando os numero
		printf(" %d", vet[i]);
	}
}
