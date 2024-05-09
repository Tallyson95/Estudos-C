/* FAETERJ-Rio
   Fundamentos de Programa��o - FPR - Manh�
   Professor Leonardo Vianna
   Aula de 25/04/2024
   
   Recursividade
   
   Exemplo: Hanoi
*/

//importa��o de bibliotecas
#include <stdio.h>

//Prot�tipos das fun��es
void Hanoi (int n, char origem, char destino, char aux);

//main
void main ()
{
	Hanoi (1000, 'A', 'C', 'B');
}

//implementa��o das fun��es
void Hanoi (int n, char origem, char destino, char aux)
{
	if (n > 0)
	{
		Hanoi (n-1, origem, aux, destino);
		printf ("%c -> %c\n", origem, destino);
		Hanoi (n-1, aux, destino, origem);
	}
}
