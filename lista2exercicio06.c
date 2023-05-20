#include <stdio.h>

void main(){
	int a, b,c, i;
	int maior, meio, menor;
	
	printf("\nEscolher tres numeros: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\t\tESCOLHA UMA OPCAO A BAIXO\n\n[1]OS TRES VALORES EM ORDEM CRESCENTE:");
	printf("\n[2]OS TRES VALORES EM ORDEM DECRESCENTE:");
	printf("\n[3]O MAIOR VALOR NO MEIO\n");
	scanf("%d", &i);
	
	
	if((a>=b)&&(a>=c)){
		maior=a;
		
		if(b>=c){
		meio=b;
		menor=c;
		}else{
			meio=c;
			menor=b;
		}
	}else{
		if(b>=c){
		   maior=b;
		   if(a>=c){
		   	meio=a;
		   	menor=c;
		   }else{
		   	meio=c;
		   	menor=a;
		   }			
		}else{
			maior=c;
			if(b>=a){
				meio=b;
				menor=a;
			}else{
				meio=a;
				menor=b;
			}
		}
		
	}
	
	switch(i){
		case 1:
			printf("Os valores em ordem crescente sao: %d, %d, %d", menor,meio,maior);
			break;
		case 2:
			printf("Os valores em ordem decrescentao sao: %d, %d, %d", maior,meio,menor);
			break;
		case 3:
			printf("O MAIOR valor no meio eh: %d, %d, %d",menor,maior,meio);
			printf("\nOU\nO MAIOR valor no meio eh: %d, %d, %d", meio, maior,menor);
			break;
		default:
			printf("OPCAO INVALIDA");
	}
	
	}
