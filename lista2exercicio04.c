#include <stdio.h>

/*Desenvolva um algoritmo que 
calcule o consumo de combustível de um 
automóvel em determinada viagem. Para isso, 
devem ser obtidos: i) o percurso (em 
quilômetros) da viagem; ii) o número de 
quilômetros que o carro percorre com um litro 
de combustível (km/l); e iii) o preço do litro do 
combustível. 
Ao final, o algoritmo deve determinar:
? A quantidade de combustível, em litros, 
consumida durante a viagem; 
? O custo total de combustível.*/

void main(){
	float viagemKm,kmPorlitro, precoLitro,viagemLitrosConsumidos, custoTcombustivel;
	printf("Quantos km voce viajou?: ");
	scanf("%f",&viagemKm);
	printf("Quantos Km o seu carro percorre por litro?: ");
	scanf("%f",&kmPorlitro);
	printf("Qual e o preco do litro do combustivel?: ");
	scanf("%f",&precoLitro);
	
	viagemLitrosConsumidos = viagemKm/kmPorlitro;
	custoTcombustivel = viagemLitrosConsumidos*precoLitro;
	
	printf("A quantidade em litros consumida durante a viagem foi: %.2f", viagemLitrosConsumidos);
	printf("\nO custo total de combustivel foi: %.2f",custoTcombustivel);
}
