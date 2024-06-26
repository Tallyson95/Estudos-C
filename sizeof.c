#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int *p = (int *)malloc(sizeof(int));
	*p = 50;
	printf("Alocou e inseriu o valor: %d", *p);
	free(p);
	printf("\n\nDesalocou e o valor agora eh: ", p);
	return 0;
}
