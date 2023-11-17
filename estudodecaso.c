#include <stdio.h>

int main(void) {
  int estante [4][4];
  char produtos [6][20] = {"Vazio", "Xampu", "Celular", "Livro", "Caneta", "Borracha"};
  int contador [6] = {0,0,0,0,0,0};
  int i, j;

  for (i= 0; i < 4; i++){
    for (j= 0; j < 4;j++){
      printf("Informar o codigo da caixa [%d][%d]: ", i,j);
      scanf("%d", &estante[i][j]);

    if (estante[i][j] == 0)
      contador[0] = contador[0] + 1;
    else if (estante[i][j] == 1)
      contador[1] = contador[1] + 1;
    else if (estante[i][j] == 2)
      contador[2] = contador[2] + 1;
    else if (estante[i][j] == 3)
      contador[3] = contador[3] + 1;
    else if (estante[i][j] == 4)
      contador[4] = contador[4] +1 ;
    else if (estante[i][j] == 5)
      contador[5] = contador[5] + 1;
    else
      printf("Codigo invalido!\n");
  }
}
    for (i=0; i<5; i++){
      printf("\nProduto: %s-", produtos[i]);
      printf("Quantidade de caixas: %d", contador[i]);
  }

  return 0;
}