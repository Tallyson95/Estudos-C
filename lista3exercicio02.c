#include <stdio.h>

void main(){
	int tipos;
	float circulo, triangulo, retangulo, quadrado,raio,base,altura,lado,pi;
	printf("Escolha uma figura geometrica para calcular a area:\n");
	printf("\n[1]CIRCULO\n[2]RETANGULO\n[3]QUADRADO\n[4]TRIANGULO\n");
	scanf("%d",&tipos);
	pi= 3.14159;
	
	switch(tipos){
		case 1:
			printf("Informe o valor do raio do circulo: ");
			scanf("%f",&raio);
			circulo = pi*(raio*raio);
			printf("A area do cirulo eh: %.2f",circulo);
			break;
		case 2:
			printf("Informe o valor da base do retangulo: ");
			scanf("%f",&base);
			printf("Informe o valor da altura do retangulo: ");
			scanf("%f",&altura);
			retangulo = base*altura;
			printf("A area do retangulo eh: %.2f",retangulo);
			break;
		case 3:
			printf("Informe o valor do lado do quadrado: ");
			scanf("%f",&lado);
			quadrado = lado*lado;
			printf("A area do quadrado eh: %.2f",quadrado);
			break;
		case 4:
			printf("Informe o valor da base do triangulo: ");
			scanf("%f",&base);
			printf("Informe o valor da altura do triangulo: ");
			scanf("%f",&altura);
			triangulo = (base*altura)/2;
			printf("A area do triangulo eh: %.2f",triangulo);
			break;
		default:
			printf("ERRO: OPCAO INVALIDA");
	}
}
