#include <stdio.h>
/*void main(){
	strcmp Fun��o de comparar a ordem de qual string vem primeiro
	Caso retorne -1, a primeira string � menor
	caso retorne 0, as strings s�o iguais
	caso retorne 1, a segunda string � menor*/
	/*char s1[10] = "tallyson";
	char s2[10] = "tallyson";
	int result = strcmp(s1,s2);
	printf("%d", result);
	
	/*Fun��o strcpy(s1, vetPessoa[i].nome) ir� copiar pra s1 um nome de um vetor do tipo TPessoa
	//strcpy(s1, vetorP[i].nome);
	float media = 13.2;
	media/=2;
	printf("%f", media);
	//strlen nos retorna o tamanho da string com o '\0'
}*/
int main() {
    char destino[50] = "Ola, ";
    const char origem[] = "tallyson!";
    
    strcat(destino, origem); // Concatenar origem em destino

    printf("Resultado: %s\n", destino); // Sa�da: Resultado: Ol�, Mundo!

    return 0;
}
