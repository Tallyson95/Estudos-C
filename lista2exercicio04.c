#include <stdio.h>

/*Desenvolva um algoritmo que 
calcule o consumo de combust�vel de um 
autom�vel em determinada viagem. Para isso, 
devem ser obtidos: i) o percurso (em 
quil�metros) da viagem; ii) o n�mero de 
quil�metros que o carro percorre com um litro 
de combust�vel (km/l); e iii) o pre�o do litro do 
combust�vel. 
Ao final, o algoritmo deve determinar:
? A quantidade de combust�vel, em litros, 
consumida durante a viagem; 
? O custo total de combust�vel.*/

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
