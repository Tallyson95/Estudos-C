/*Desenvolver uma função recursiva que
determine o número de caracteres comuns
entre duas strings s1 e s2.*/
#include <stdio.h>
//versão iterativa
/*void main(){
	char s1[30] = "tallyson";
	char s2[30] = "tallyson";
	int result = ocorrencias(s1,s2);
	printf("%d", result);
}
int ocorrencias(char s1[], char s2[]){
	int i = 0, j = 0, cont = 0, aux = 0;
	int tam1, tam2, tamanho;
	
	tam1 = strlen(s1);
	tam2 = strlen(s2);
	
	tamanho = maior(tam1,tam2);
	for(i=0;i<tamanho;i++){
		for(j=0;j<tamanho;j++){
			if(s1[i] == s2[j] ){
				cont++;
				break;
			}
			
		}
	}
	
	return (cont);
}
int maior(int tam1, int tam2){
	int maior;
	if(tam1 > tam2){
		maior = tam1;
	}else{
		if(tam2 > tam1){
			maior = tam2;
		}else{
			maior = tam1;
		}
	}
	return maior;
}*/

//versão recursiva
/*void main(){
	char s1[] = "tallyson";
	char s2[] = "bruno";
	int result = caracterComumRec(s1, s2);
    printf("Número de caracteres comuns: %d\n", result);
}

int caracterComumRec(char *s1, char *s2){

	if (*s1 == *s2 && *s1 != '\0') {
        return 1 + caracterComumRec(s1 + 1, s2 + 1);
    }else{
		return caracterComumRec(s1 + 1, s2);
	}
}*/
void main(){
	int fat = 4;
	int result = fatorial(fat);
	printf("%d", result);
}
int fatorial(int fat){
	if(fat > 0){
		return fatorial(fat-1)*fat;
	}else{
		return 1;
	}
}


	

