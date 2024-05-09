/*Pede-se a implementa��o de uma fun��o
recursiva que exiba os n primeiros termos de
uma PG (Progress�o Geom�trica), onde a1 � o
seu primeiro termo e q a raz�o.*/
#include <stdio.h>
void main(){
	int a1 = 6, razao = 3;
	int aux = 0;
	int termo = 3;
	//pgRecursiva(a1,razao, aux, termo);
	pgRecursiva(a1,razao, termo);
}
void pgRecursiva(int a1, int razao,  int termo){
	if(termo > 0){
		printf("%d  ", a1);
		
		pgRecursiva(a1*razao, razao, termo-1);
	}else{
		return;
	}
}
/*void pgRecursiva(int a1, int razao, int aux, int termo){
	if(aux < termo){
		printf("%d  ", a1);
		aux++;
		pgRecursiva(a1*razao, razao, aux, termo);
	}else{
		return;
	}
}*/
