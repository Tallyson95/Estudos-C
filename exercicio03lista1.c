#include <stdio.h>
/*03: Escreva um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu gênero e altura,
utilizando as seguintes formulas:

Para homens: (72.7*h)-58.
Para mulheres: (62.1*h)-44.7.
*/

void main(){
	char nome [100];
	printf("Qual eh o seu nome?: ");
	scanf("%s", &nome);
	float altura, pesoIdeal;
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	char genero [5];
	printf("Qual eh o genero que voce se identifica? F ou M: ");
	scanf("%s", genero);
	
	if(genero == "M" || genero == "m"){
		pesoIdeal = (72.7*altura)-58;
		printf("%s", nome);
		printf(", para a sua altura o peso ideal eh: ");
		printf("%.1f kg", pesoIdeal);
	}else{
		pesoIdeal = (62.1*altura)-44.7;
		printf("%s", nome);
		printf(", para a sua altura o peso ideal eh: ");
		printf("%.1f kg", pesoIdeal);
		}
}
