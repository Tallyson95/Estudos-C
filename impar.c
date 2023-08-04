/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 24/06/2023 (aula extra)
	
	Lista de Exercícios XI (Vetores)
	
	QUESTÃO 05:
	Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 
	2 vetores conforme forem pares ou ímpares.
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TAM 300

//protótipos das funções
void paresImpares (int vetOriginal[], int tamanho, int vetPar[], int *tamP, int vetImpar[], int *tamI);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vetor[TAM], pares[TAM], impares[TAM];
	int quantPares, quantImpares;
	
	//preenchendo o vetor original com números aleatórios
	preencherAleatorio (vetor, TAM);
	
	//chamando a função
	paresImpares (vetor, TAM, pares, &quantPares, impares, &quantImpares);
	
	//exibindo os três vetores
	
	printf ("Original:\n");
	exibir (vetor, TAM);
	
	printf ("Pares:\n");
	exibir (pares, quantPares);
	
	printf ("Impares:\n");
	exibir (impares, quantImpares);
}

//implementação das funções
void paresImpares (int vetOriginal[], int tamanho, int vetPar[], int *tamP, int vetImpar[], int *tamI)
{
	//declaração de variáveis
	int i, posP = 0, posI = 0;
	
	//percorrendo o vetor original
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posição 'i' é par ou ímpar
		if (vetOriginal[i] % 2 == 0)
		{
			vetPar[posP] = vetOriginal[i];
			posP++;
		}
		else
		{
			vetImpar[posI] = vetOriginal[i];
			posI++;
		}
	}
	
	//armazenando em 'tamP' e 'tamI' as quantidades de elementos dos vetores de pares e ímpares
	*tamP = posP;
	*tamI = posI;
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100;  //gerando números aleatórios no intervalo de 0 a 99
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
