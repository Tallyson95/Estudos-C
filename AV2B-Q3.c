/*Questão 03 [2,5 pontos]:
Considere a existência de dois vetores:
 Notas: contendo as notas de um aluno;
 Pesos: armazenando os pesos de cada nota.
Implementar uma função que, dados estes dois
vetores, calcule a média ponderada do aluno,
conforme exemplificado abaixo:

Notas 4.5 8.0 5.5 10.0 8.0
0 1 2 3 4
Pesos 2 4 6 2 3
0 1 2 3 4

Média = (4.5x2 + 8.0x4 + 5.5x6 + 10.0x2 +
8.0x3)/(2+4+6+2+3) = (9.0+32.0+33.0+20.0+24.0)/17
= 118/17 = 6.94*/
#include <stdio.h>
void main ()
{
	int i;
	int tam=5;
	float Vnota[] = {4.5,8.0,5.5,10.0,8.0};
	float median=0;
	int Vpeso[]= {2,4,6,2,3};
	
	
	/*for(i=0;i<tam;i++)
	{
		printf("Digite a nota %d: ",i+1);
		scanf("%f",&Vnota[i]);
	}
	for(i=0;i<tam;i++)
	{
		printf("Digite a Peso da nota %d: ",i+1);
		scanf("%d",&Vpeso[i]);
	}*/
	media(Vnota,Vpeso, tam, &median);
	printf("%f", median);
}

 int media (float Vnota[],int Vpeso[],int tam, float *media)
{
	int i, div=0;
	Vnota[tam];
	Vpeso[tam];
	for(i=0;i<tam;i++)
	{
		*media+=Vpeso[i]*Vnota[i];
		div+=Vpeso[i];
	}
	*media=*media/div;
}

