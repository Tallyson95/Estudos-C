#include <stdio.h>

/*01: O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do
distribuidor e dos impostos aplicados ao custo de f�brica. Desenvolva um algoritmo que calcule
o custo ao consumidor de determinado carro.
*/
void main(){
	float custoFabrica, valorTotal, porcentagemDistri, imposto;
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f", &custoFabrica);
	porcentagemDistri = (0.4*custoFabrica);
	imposto = (0.3*custoFabrica);
	valorTotal = (custoFabrica + porcentagemDistri + imposto);
	printf("O custo ao consumidor deste carro �: %.3f", valorTotal);
}
