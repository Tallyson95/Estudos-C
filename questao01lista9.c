#include <stdio.h>

multiplos(){
	int a, b, n,m;
	printf("Digite um numero N: ");
	scanf("%d",&n);
	printf("Escolha o intervalo de A e B: ");
	scanf("%d %d", &a, &b);
	m= n;
	int i;
	for(i=1;n<=b;i++){
		printf("%d",n);
		n+=m;
	}
}
void main(){
	multiplos();
}
