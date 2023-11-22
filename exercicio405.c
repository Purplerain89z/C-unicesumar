/*struct estrutura heterogenias(registro) em c stucts*/
#include <stdio.h>

struct produto{
    int codigo;
    char nome[50];
    int quantidade;
    float valor_compra;
    float valor_venda;
};

int main(){
    struct produto prod;

    prod.codigo = 1;
    prod.valor_compra = 14.95;
    prod.valor_venda = 20.00;
    strcpy(prod.nome, "Chiclete");

    printf("%d - %.2f - %.2f - %s\n", prod.codigo, prod.valor_compra, prod.valor_venda, prod.nome);
}