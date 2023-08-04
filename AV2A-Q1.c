/*Desenvolver uma fun��o que, dado um n�mero real
n, arredonde-o para o valor inteiro mais pr�ximo.
Exemplos:
 n = 4.67 Resposta: 5
 n = 4.23 Resposta: 4
 n = 3.0 Resposta: 3
Notas:
1. � proibido o uso de fun��es j� existentes na
linguagem que possuam este mesmo objetivo;
2. Apresentar a main chamando a fun��o solicitada.*/

#include <stdio.h>


int arredondar(float n);
void main(){
    float n = 4.23;
    int resultado;
    resultado = arredondar(n);
    printf("O numero arredondado mais proximo de %.2f eh:   %d\n", n, resultado);

}
int arredondar(float n){
    int inteiro = (int)(n + 0.5);
    return inteiro;
}


