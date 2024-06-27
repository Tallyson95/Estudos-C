#include <stdio.h>
/*A partir de arqA e arqB já ordenados, criar arqC 
com todos os valores que estão em A e com todos os valores de B e sem repetição*/
int uniao(char nomeArqA[], char nomeArqB[], char nomeArqC[]);

int main(){
	char nomeArqA[30] = "a.txt";
	char nomeArqB[30] = "b.txt";
	char nomeArqC[30] = "arqC.txt";
	int result = uniao(nomeArqA, nomeArqB, nomeArqC);
	if(result == 1){
		printf("\nArquivo criado com sucesso!\n");
	}else{
		printf("\nErro ao criar arquivo!\n");
	}
	return 0;
}

int uniao(char nomeArqA[], char nomeArqB[], char nomeArqC[]){
	FILE *arqA, *arqB, *arqC;
	
	arqA = fopen(nomeArqA, "r");
	arqB = fopen(nomeArqB, "r");
	arqC = fopen(nomeArqC, "w");
	int numA, numB, fimA = 0, fimB = 0;
	
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
				fprintf(arqC, "%d\n",numA);
				if(fscanf(arqA, "%d", &numA) == EOF){
					fimA = 1;
				}
			}else{
				if(numB < numA){
					fprintf(arqC, "%d\n",numB);
					if(fscanf(arqB, "%d", &numB) == EOF){
						fimB = 1;
					}
				}else{
					fprintf(arqC, "%d\n",numA);
					if(fscanf(arqA, "%d", &numA) == EOF || fscanf(arqB, "%d", &numB) == EOF ){
						fimA = 1;
					}
				}
			}
			
		
		}
		while(fscanf(arqA, "%d", &numA) != EOF){
			fprintf(arqC, "%d\n", numA);
		}
			while(fscanf(arqB, "%d", &numB) != EOF){
			
			fprintf(arqC, "%d\n", numB);
		}
		
		fclose(arqA);
		fclose(arqB);
		fclose(arqC);
		return 1;
		
	}
}
