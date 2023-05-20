#include <stdio.h>

void main(){
	float peso, pesoPlanetas, gravidade;
	int tipos;
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Escolha um dos planetas abaixo de acordo com os numeros abaixo:");
	printf("\n1\tMERCURIO\n2\tVENUS\n3\tMARTE\n4\tJUPTER\n5\tSATURNO\n6\tURANO\n");
	scanf("%d", &tipos);
	
	switch(tipos){
		case 1:
			gravidade = 0.37;
			break;
		case 2:
			gravidade = 0.88;
			break;
		case 3:
			gravidade = 0.38;
			break;
		case 4:
			gravidade = 2.64;
			break;
		case 5:
			gravidade = 1.15;
			break;
		case 6:
			gravidade = 1.17;
			break;
		default:
			printf("opcao invalida");
	}
	pesoPlanetas = (peso/10)*gravidade;
	printf("O seu peso na terra eh: %.2f\n\nO seu peso no planeta escolhido eh: %.2f", peso, pesoPlanetas);
}
