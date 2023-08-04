#include <stdio.h>
/*Fazer uma função que transforme um
número decimal num para o equivalente na
base b, 2 <= b <= 8.
Se a conversão for possível, a função
retornará 1, além do valor convertido; caso
contrário, retornará 0.*/
int converter(int valor, int base, int *valor2);
void main(){
	int b, num, x, valor2;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("\nInforme a base desejada no intervalo de 2 e 8: ");
	scanf("%d", &b);
	
	if(b<2 || b>8){
		
		x = converter(num, b, &valor2);
		printf("\n%d: \nNao foi possivel realizar a convercao, pois o numero nao esta no intervalo determinado.", x);
	}else{

		x = converter(num, b, &valor2);
		printf("\n%d: \nO numero equiavalente a [%d] na base [%d] eh: %d", x, num, b, valor2);
	
	}
	

}

int converter(int valor, int base, int *valor2){
	int algarismoD, cont = 0, i = 1;
	if((base>=2) && (base<=8)){
		while(valor>0){
			algarismoD = valor%base;
			valor= valor/base;
			cont += algarismoD * i;
			i*=10;
			
		}
		*valor2 = cont;
		return 1;
	}else{
		return 0;
	}
}
