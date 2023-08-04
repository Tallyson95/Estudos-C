#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
ATIVIDADE 8:

Desenvolver uma fun��o que, dado um vetor vetA de inteiros,
crie um novo vetor � vetB � com as seguintes caracter�sticas:

1. O maior elemento de vetA ocupar� a primeira posi��o de vetB;

2. O segundo maior elemento de vetA ocupar� a segunda posi��o 
de vetB e, assim, sucessivamente;

3. Embora o vetor vetA possa conter n�meros repetidos, vetB 
n�o conter� duplicatas;

4. O programa dever� respeitar o seguinte algoritmo:

- Localizar o maior elemento de vetA e coloc�- lo na primeira
posi��o de vetB;

- Localizar o segundo maior elemento de vetA ecoloc�-lo na 
segunda posi��o de vetB;

- Este processo repete-se at� colocar em vetB o menor elemento
de vetA.

5. Portanto, pelo descrito no item anterior, nenhum algoritmo
de ordena��o existente na literatura deve ser aplicado a esta solu��o;

6. Ap�s chamar a fun��o, a main dever� exibir os elementos dos dois vetores.
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
