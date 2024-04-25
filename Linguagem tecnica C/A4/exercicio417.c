#include <stdio.h>

struct produto
{
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main(){
    struct produto ficha[10];
    int i;
    
    for(i=0; i<10; i++){
        printf("Digite o codigo do produto: ");
        scanf("%d", &ficha[i].codigo);
        printf("Digite a descrição do produto: ");
        scanf("%s", ficha[i].descricao);
        printf("Digite o preço d produto: ");
        scanf("%f",&ficha[i].descricao);
        printf("digite o preço do produto");
        scanf("%f",&ficha[i].saldo);

    }
    for (i=0; i<10;i++){
        printf("\n PRODUTO %d\n", i+1);
        printf("Código: %d\n", ficha[i].preco);
        printf("Descrição: %s\n", ficha[i].descricao);
        printf("Preço: %.2f", ficha[i].preco);
        printf("Saldo: %d\n", ficha[i].saldo);
    }
    return(0);
}