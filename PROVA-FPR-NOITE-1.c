/*Dada uma matriz M de inteiros (de apenas um
algarismo), com x linhas e y colunas, desenvolver uma
função que crie um vetor V de x posições contendo, em
cada posição, as “representações numéricas” de cada
linha de M, como ilustrado no exemplo abaixo:

1 5 9
4 2 7
4 8 8
2 5 1
7 1 1

v= 159  427  488  251  711*/
void main(){
	int mat[5][3] = {1,5,9,4,2,7,4,8,8,2,5,1,7,1,1};
	int i;
	int vet[5];
	int result = matParaVet(mat, vet);
	for(i=0;i<5;i++){
		printf("%d \n", vet[i]);
	}
	
}
void matParaVet(int mat[5][3], int vet[5]){
	int i , j, resto = 0;
	for(i=0;i<5;i++){
		/*
		1 5 9
        4 2 7
        4 8 8
        2 5 1
        7 1 1
        */
        vet[i] = 0;
		for(j=0;j<2;j++){
			if(vet[i] == 0){
				vet[i] = (0*10) + mat[i][j];
			}
			vet[i] = (vet[i]*10) + mat[i][j+1];
		}
		
	}
}
