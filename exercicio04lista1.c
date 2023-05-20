#include <stdio.h>
/*04: Um banco concederá crédito especial aos seus clientes, variável com o saldo médio no último ano.
Faça um algoritmo que calculo o crédito de acordo com a tabela abaixo:
Inferior a 1000 = nenhum crédito.
De 1000 a 1499,99 = 20% do saldo médio.
De 1500 a 2499,99 = 30% do saldo médio.
De 2500 ou mais = 40% do saldo médio.
*/

void main(){
	float saldoMedio, credito;
	char nome [100];
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Ola %s, tudo bem? \n", nome);
	printf("Digite o valor do seu saldo medio anual: ");
	scanf("%f", &saldoMedio);
	
	if(saldoMedio <1000){
		printf("%s, ", nome);
		printf("com o saldo de %.2f", saldoMedio); 
		printf(" o banco nao podera conceder credito para voce");
	}else{
		if(saldoMedio <1500){
			credito = (0.2*saldoMedio);
			printf("%s, ", nome);
			printf("com o saldo de %.2f", saldoMedio); 
			printf(" o banco concedera 20 por cento de credito para voce");
			printf(", totalizando um valor de %.2f", credito);
		}else{
			if(saldoMedio < 2500){
				credito = (0.3*saldoMedio);
			    printf("%s, ", nome);
				printf("com o saldo de %.2f", saldoMedio); 
			    printf(" o banco concedera 30 por cento de credito para voce");
			    printf(", totalizando um valor de %.2f", credito);
			}else{
				credito = (0.4*saldoMedio);
				printf("%s, ", nome);
			    printf("com o saldo de %.2f", saldoMedio); 
			    printf(" o banco concedera 40 por cento de credito para voce");
			    printf(", totalizando um valor de %.2f", credito);
			}
		}
	}
	printf("\nFIM DO PROGRAMA!");
}
