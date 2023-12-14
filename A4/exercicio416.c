#include<stdio.h>

struct produto{
    int codigo;
    char discricao[50];
    float preco;
    int saldo
};

int main(){
    struct  produto ficha;
    printf("Digite o codígo do produto: ");
    scanf("%d", &ficha.codigo);
    printf("Digite a discrição do produto: ");
    scanf("%s", ficha.discricao);
    printf("Digite o preço do produto: ");
    scanf("%f", &ficha.preco);
    printf("Digite o saldo do produto: ");
    scanf("%d", &ficha.saldo);

    printf("Codigo: %d\n",ficha.codigo);
    printf("Discrição: %s", ficha.discricao);
    printf("Preço: %.2f\n",ficha.preco);
    printf("Saldo: %d\n", ficha.saldo);
    
    return(0);
}