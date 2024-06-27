#include <stdio.h>
int intersecao(char nomeArqA[], char nomeArqB[], char nomeArqC[]);
int main(){
	char arqA[30] = "a.txt";
	char arqB[30] = "b.txt";
	char arqC[30] = "intersecao.txt";
	int result = intersecao(arqA, arqB, arqC);
	if(result == 1){
		printf("\nArquivo criado!");
	}else{
		printf("\nArquivo nao foi criado ...");
	}
	return 1;
}
int intersecao(char nomeArqA[], char nomeArqB[], char nomeArqC[]){
	FILE *arqA, *arqB, *arqC;
	int fimA = 0, fimB = 0;
	
	arqA = fopen(nomeArqA, "r");
	arqB = fopen(nomeArqB, "r");
	arqC = fopen(nomeArqC, "w");
	
	int numA, numB;
	
	if(!arqA || !arqB || !arqC){
		fclose(arqA);
		fclose(arqB);
		fclose(arqC);
		return 0;
	}else{
		fscanf(arqA, "%d", &numA);
		fscanf(arqB, "%d", &numB);
		while(!fimA && !fimB){
			if(numA < numB){
				//fprintf(arqC, "%d\n", numA);
				if(fscanf(arqA, "%d", &numA) == EOF){
					fimA = 1;
				}
			}else{
				if(numB < numA){
					//fprintf(arqC, "%d\n", numB);
					if(fscanf(arqB, "%d", &numB) == EOF){
						fimB = 1;
					}
				}else{
					fprintf(arqC, "%d\n", numA);
					if(fscanf(arqA, "%d", &numA) == EOF || fscanf(arqB, "%d", &numB) == EOF ){
						fimA = 1;
					}
				}
			}
		}
		fclose(arqA);
		fclose(arqB);
		fclose(arqC);
		return 1;
	}
}
