/*Questão 03 [2,5 pontos]:
Dadas duas strings s1 e s2, implementar uma função que crie duas outras strings – s3 e s4 – com as seguintes
características:
s3: conterá todos os caracteres de s1 que também estão em s2;
s4: conterá todos os caracteres de s1 que não estão em s2. 

s1: “PROGRAMACAO”          s3: “ROGRAMAAO”
 s2: “ALGORITMOS”          s4: “PC” 
*/
#include <stdio.h>
void criarStrings(char s1[], char s2[], char s3[], char s4[]);
int main(){
	char s1[30] = "programacao";
	char s2[30] = "algoritmos";
	char s3[30];
	char s4[30];
	criarStrings(s1,s2,s3,s4);
	printf("%s\n\n%s", s3, s4);
	return 0;
}
void criarStrings(char s1[], char s2[], char s3[], char s4[]){
	int i, j, diferentes, k = 0, l =0;
	for(i=0;s1[i] != '\0';i++){
		diferentes = 1;
		for(j=0;s2[j] != '\0';j++){
			if(s1[i] == s2[j]){
				diferentes = 0;
				break;
			}
		}
		if(diferentes == 1){
			s4[l] = s1[i];
			l++;
		}else{
			s3[k] = s1[i];
			k++;
		}
	}
	s3[k] = '\0';
	s4[l] = '\0';
}
