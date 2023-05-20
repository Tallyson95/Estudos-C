#include <stdio.h>

void main(){
	int n, y, i;
	
	printf("Escolhe um numero N: ");
	scanf("%d",&n);
	printf("\nEscolha um numero Y: ");
	scanf("%d",&y);
	
	for(i=y;i<n;i=y+i){
		printf("%d ", i);
	}
	

	
	
}
