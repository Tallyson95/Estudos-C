#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
ATIVIDADE 8:

Desenvolver uma função que, dado um vetor vetA de inteiros,
crie um novo vetor – vetB – com as seguintes características:

1. O maior elemento de vetA ocupará a primeira posição de vetB;

2. O segundo maior elemento de vetA ocupará a segunda posição 
de vetB e, assim, sucessivamente;

3. Embora o vetor vetA possa conter números repetidos, vetB 
não conterá duplicatas;

4. O programa deverá respeitar o seguinte algoritmo:

- Localizar o maior elemento de vetA e colocá- lo na primeira
posição de vetB;

- Localizar o segundo maior elemento de vetA ecolocá-lo na 
segunda posição de vetB;

- Este processo repete-se até colocar em vetB o menor elemento
de vetA.

5. Portanto, pelo descrito no item anterior, nenhum algoritmo
de ordenação existente na literatura deve ser aplicado a esta solução;

6. Após chamar a função, a main deverá exibir os elementos dos dois vetores.
*/

#define Tam 6

void fazerVetB(int vetA[], int vetB[], int tam);
void exibir(int vetA[], int vetB[], int tam);
void preencherVet(int vetA[], int tam);
int validar(int vetA[], int tam, int n);

void main(){
	
	int vetA[Tam], vetB[Tam];
	
	preencherVet(vetA, Tam);
	exibir(vetA, vetB, Tam);
	fazerVetB(vetA, vetB, Tam);
	exibir(vetA, vetB, Tam);
}

void fazerVetB(int vetA[], int vetB[], int tam){
	
	int i, j, maior = -9999, maior2 = maior, menor = 1000, cont = 0;
	
	for(i = 0; i < tam; i++){
		
		if(vetA[i] > maior){
			maior = vetA[i];
		}
		if(vetA[i] < menor){
			menor = vetA[i];
		}
		
		
		if((vetA[i] < maior) && (vetA[i] > menor)){
    		maior2 = vetA[i];
		}
		
		if(validar(vetB, cont, maior) == 1){
			vetB[cont] = maior2;
			cont++;
    	}
    	
	}
	
	
	printf("menor: %d\n", menor);
	printf("maior: %d\n", maior);
	printf("maior2: %d\n", maior2);
	
	
	
}


void preencherVet(int vetA[], int tam){
	
	int i;
	
	srand (time(NULL));
	
	for (i = 0; i < tam; i++){
		vetA[i] = rand()%100 + 1; 
	}
}

void exibir(int vetA[], int vetB[], int tam){

	int i;
	
	printf ("\nVetorA[ ");
	
	for (i = 0; i < tam;i++)
	{
		printf ("%d ", vetA[i]);
	}
	
	printf ("]");
	
	printf ("\nVetorB[ ");
	
	for (i = 0; i < tam;i++)
	{
		printf ("%d ", vetB[i]);
	}
	
	printf ("]\n\n");
}


int validar(int vetA[], int tam, int n){
	
	int i;
	
	for(i = 0; i < tam; i++){
		
		if(vetA[i] == n){
			return 0;
		}
		
	}
	return 1;
}
