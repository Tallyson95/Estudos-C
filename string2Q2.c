/*Implementar uma função que, dadas duas
strings s1 e s2, crie uma nova string – s3 –
contendo todos os caracteres de s1 que não
estejam em s2.*/
#include <stdio.h>
#define tam 20
void novaString(char s1[], char s2[], char s3[]);
int main(){
	char s1[tam] = "laura";
	char s2[tam] = "anelise";
	char s3[tam];
	novaString(s1,s2,s3);
	printf("%s", s3);
	return 0;
}
void novaString(char s1[], char s2[], char s3[]){
	int i,j, iguais, k = 0;
	s3[k] = '\0';
	for(i=0;s1[i] != '\0';i++){
		iguais = 1;
		for(j=0;s2[j] != '\0';j++){
			if(s1[i] == s2[j]){
				iguais = 0;
				break;
			}
		}
		if(iguais == 1 ){
			s3[k] = s1[i];
			k++;
		}
	}
	s3[i] = '\0';
	char s4[tam];
	semRepeticao(s3);
	
}
void semRepeticao(char s1[]){
	int i, j,k=0, diferentes;
	
	for(i=0;s1[i] != '\0'; i++){
		diferentes = 1;
		for(j=0;j<i;j++){
			if(s1[i] == s1[j]){
				diferentes = 0;
			}
		}
		if(diferentes == 1){
			s1[k] = s1[i];
			k++;
		}
	}
	s1[k] = '\0';
}

