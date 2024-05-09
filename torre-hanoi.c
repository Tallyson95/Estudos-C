/* FAETERJ-Rio
   Fundamentos de Programação - FPR - Manhã
   Professor Leonardo Vianna
   Aula de 25/04/2024
   
   Recursividade
   
   Exemplo: Hanoi
*/

//importação de bibliotecas
#include <stdio.h>

//Protótipos das funções
void Hanoi (int n, char origem, char destino, char aux);

//main
void main ()
{
	Hanoi (1000, 'A', 'C', 'B');
}

//implementação das funções
void Hanoi (int n, char origem, char destino, char aux)
{
	if (n > 0)
	{
		Hanoi (n-1, origem, aux, destino);
		printf ("%c -> %c\n", origem, destino);
		Hanoi (n-1, aux, destino, origem);
	}
}
