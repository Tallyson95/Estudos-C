#include <Stdio.h>

void main(){
	float valor, aVista, parc5x, parc10x;
	printf("Qual e o valor a ser pago?: ");
	scanf("%f",&valor);
	
	aVista = valor*0.9;
	parc5x = valor/5;
	parc10x = ((valor*0.2)+valor)/10;
	
	printf("\nPagando a vista voce tem um desconto de 10 por cento na compra e pagara um valor de: %.2f",aVista);
	printf("\nParcelando 5x sem juros voce paga um valor de: %.2f",parc5x);
	printf("\nCom 10 parcelas voce paga um valor de: %.2f acrecido de 20 por cento do valor do produto",parc10x);
}
