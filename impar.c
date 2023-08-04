/*
	FAETERJ-Rio
	FAC - Turmas A e B
	Data: 24/06/2023 (aula extra)
	
	Lista de Exerc�cios XI (Vetores)
	
	QUEST�O 05:
	Elaborar uma fun��o que, dado um conjunto de 300 valores inteiros, distribua-os em 
	2 vetores conforme forem pares ou �mpares.
*/

//importa��o de bibliotecas
#include <stdio.h>

//defini��o de constantes
#define TAM 300

//prot�tipos das fun��es
void paresImpares (int vetOriginal[], int tamanho, int vetPar[], int *tamP, int vetImpar[], int *tamI);

void preencherAleatorio (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vetor[TAM], pares[TAM], impares[TAM];
	int quantPares, quantImpares;
	
	//preenchendo o vetor original com n�meros aleat�rios
	preencherAleatorio (vetor, TAM);
	
	//chamando a fun��o
	paresImpares (vetor, TAM, pares, &quantPares, impares, &quantImpares);
	
	//exibindo os tr�s vetores
	
	printf ("Original:\n");
	exibir (vetor, TAM);
	
	printf ("Pares:\n");
	exibir (pares, quantPares);
	
	printf ("Impares:\n");
	exibir (impares, quantImpares);
}

//implementa��o das fun��es
void paresImpares (int vetOriginal[], int tamanho, int vetPar[], int *tamP, int vetImpar[], int *tamI)
{
	//declara��o de vari�veis
	int i, posP = 0, posI = 0;
	
	//percorrendo o vetor original
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento da posi��o 'i' � par ou �mpar
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
	
	//armazenando em 'tamP' e 'tamI' as quantidades de elementos dos vetores de pares e �mpares
	*tamP = posP;
	*tamI = posI;
}

void preencherAleatorio (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100;  //gerando n�meros aleat�rios no intervalo de 0 a 99
	}
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
