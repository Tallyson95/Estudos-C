#include <stdio.h>
#include <stdlib.h>
typedef struct No{
	int valor;
	struct No *proximo
}TNo;

typedef TNo* TLista;

void main(){
	TLista topo = NULL;
	int num = 5;
	//empilhar(TLista *topo, num);
}
int empilhar(TLista *topo, int num){
	TLista aux = (TLista) malloc(sizeof(TNo));
	if(!aux){
		return 0;
	}else{
		aux->valor = num;
		aux = *topo;
		*topo = aux;
		return 1;
	}
}

int desempilhar(TLista *topo,int *num){
	TLista aux;
	if(*topo){
		aux = *topo;
		*topo = aux->proximo;
		*num = aux->valor;
		free(aux);
		return 1;
	}else{
		return 0;
	}
}
