#include <stdio.h>
/*6: Escreva um algoritmo que determine a ordem de uma data(dia e mes) no ano.
*/

void main(){
	int dia, mes, ano;
	int dia2, mes2, ano2;
	printf("Informe o dia da PRIMEIRA data: ");
	scanf("%d", &dia);
	printf("Informe o mes da PRIMEIRA data: ");
	scanf("%d", &mes);
	printf("Informe o ano da PRIMEIRA data: ");
	scanf("%d", &ano);
	
	printf("Informe o dia da SEGUNDA data: ");
	scanf("%d", &dia2);
	printf("Informe o mes da SEGUNDA data: ");
	scanf("%d", &mes2);
	printf("Informe o ano da SEGUNDA data: ");
	scanf("%d", &ano2);
	
	if(ano > ano2){
		printf("A data mais recente é %d - %d - %d", dia, mes, ano);
	}else{
		if(ano < ano2){
		printf("A data mais recente é %d - %d - %d", dia2, mes2, ano2);
		}else{
			if(mes > mes2){
				printf("A data mais recente é %d - %d - %d", dia, mes, ano);
			}else{
				if(mes < mes2){
					printf("A data mais recente é %d - %d - %d", dia2, mes2, ano2);
				}else{
					if(dia > dia2){
						printf("A data mais recente é %d - %d - %d", dia, mes, ano);
					}else{
						if(dia < dia2){
							printf("A data mais recente é %d - %d - %d", dia2, mes2, ano2);
						}else{
						   printf("As datas %d - %d - %d e %d - %d - %d sao iguais"
						,dia, mes, ano, dia2, mes2, ano2);	
						}
						
						
					}
				}
			}
		}
	}
}
