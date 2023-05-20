#include <stdio.h>


/*QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.
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
