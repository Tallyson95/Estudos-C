/*Pede-se o desenvolvimento das seguintes
fun��es:
Fun��o 1: dado um vetor contendo
n�meros reais, determine a
posi��o do maior elemento
(posMaior) existente entre as
posi��es p1 e p2 do vetor,
assim como a posi��o do
menor valor (posMenor) entre
estas mesmas posi��es.
Fun��o 2: esta dever� chamar a 1a
fun��o e, com as posi��es
retornadas, trocar o conte�do
de p1 pelo conte�do de
posMenor e o de p2 pelo
conte�do de posMaior.

Nota: a fun��o main dever� chamar a
fun��o 2 (que, por sua vez, disparar�
a execu��o da 1a fun��o).*/	
#include <stdio.h>
#define TAM 10
	
void funcao1(float vetor[], int tamanho, int p1, int p2, int *posMaior, int *posMenor);
void funcao2(float vetor[],int tamanho, int p1, int p2, int *posMaior2,int *posMenor2);
void exibirVetor(float vetor[], int tamanho);
	
void main(){
	    float vetor[TAM] = {5, 3, 0.2, 1, 12, 7,9,15,13,20.2};
	    int p1 = 1, p2 = 8;
	    int posMaior, posMenor;	
	    exibirVetor(vetor, TAM);
	    funcao2(vetor, TAM, p1,p2,&posMaior, &posMenor);
	    printf("A posicao do maior numero eh: %d\nA posicao do menor numero eh: %d", posMaior, posMenor);
	    exibirVetor(vetor, TAM);

	}
	
void funcao1(float vetor[], int tamanho, int p1, int p2, int *posMaior, int *posMenor){
	    //{5, 3, 4, 1, 12, 7};
	    // 0  1  2  3  4   5
	    int i=p1+1;
		*posMenor = i;
		    while(i<p2){
		    	if (vetor[i] > vetor[i+1]) {
		            *posMaior = i;
		        }else{
				    if (vetor[i] < vetor[*posMenor]){
		            *posMenor = i;
					}
				}
		        i++;
			}
	}
	
void funcao2(float vetor[],int tamanho, int p1, int p2, int *posMaior2,int *posMenor2){
	//utilizei ponteiro na fun��o 2 para conseguir visualizar melhor o valor de posMaior e posMenor ao chamar na main
	//n�o printei nada na fun��o 2, somente na main
		int i, temp, posMaior, posMenor;
		funcao1(vetor, tamanho, p1, p2, &posMaior, &posMenor);
		*posMaior2 = posMaior;
		*posMenor2 = posMenor;
		
        temp = vetor[p1];
        vetor[p1] = vetor[*posMenor2];
        vetor[*posMenor2] = temp;

        temp = vetor[p2];
        vetor[p2] = vetor[*posMaior2];
        vetor[*posMaior2] = temp;
}

void exibirVetor(float vetor[], int tamanho){
	    int i;
	    printf("\n\n");
	    for (i=0;i<tamanho;i++) {
	        printf("%.1f   ", vetor[i]);
	    }
	    printf("\n\n");
	}
