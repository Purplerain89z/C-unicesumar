#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	int estante [5][5];
	char produtos [5][30]= {"vazio", "lapis", "caneta", "borracha", "celular"};
	int cont[5] = {0,0,0,0,0};
	int i,j;
	
	for(i = 0 ; i < 5 ; i++){
		for (j = 0; j < 5; j++){
			printf("Informe o codigo do produto de 0 a 4[%d][%d]:", i, j);
			scanf("%d", &estante[i][j]);
		
		int codigoProduto = estante[i][j];
		
		if (codigoProduto >= 0 && estante[i][j] <= 5){
			cont[codigoProduto]++;
		}else {
			printf("Codigo invalido.\n");
		}
		}
	}
		for (i=0; i<5; i++){		
		printf("\nProduto %s-", produtos[i]);
		printf("Quanidade de caixas: %d", cont[i]);
	 	}
	
	return (0);
}