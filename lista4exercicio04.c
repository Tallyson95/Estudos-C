#include <stdio.h>


/*QUEST�O 04: Fa�a um programa que leia
300 n�meros reais. Ao final, devem ser
exibidas as seguintes informa��es:
a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos.
*/
void main(){
	int i, numero, positivos = 0, negativos = 0;
	
	for(i=0; i<3;i++){
		printf("Digite um numero real: ");
		scanf("%d",&numero);
		if(numero > 0){
			positivos++;
		}else{
			negativos++;
			
		}
	}
	printf("A quantidade de numeros positivos e: %d", positivos);
	printf("\nA quantidade de numeros negativos e: %d", negativos);
	
}
