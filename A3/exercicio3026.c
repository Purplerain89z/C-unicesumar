#include <stdio.h>

int main(){
    int numerop, dia, mes,ano, quant;
    float preco, total;

    printf("Informe o numero do pedido: ");
    scanf("%d",&numerop);

     while(numerop != 0){
    printf("Informe o dia do pedido: ");
    scanf("%d", &dia);
    printf("Informe o mes do pedido: ");
    scanf("%d", &mes);
    printf("Informe o ano do pedido: ");
    scanf("%d", &ano);
    printf("Informe o preço do produto: ");
    scanf("%f",&preco);
    printf("Informe a Quantidade do produto: ");
    scanf("%d",&quant);
    printf("Dados guardados.\n");
    printf("\nInforme o numero do pedido: ");
    scanf("%d",&numerop);
    }
    printf("\n=====================================\n");
    printf("Pedido %d              Data: %d/%d/%d\n",numerop, dia,mes,ano);
    printf("Protudo --- Quatidade --- Valor --- Total\n");
    printf("%d          %d             %.2f        %.2f", numerop, quant, preco, (preco * quant));
    printf("\n=====================================\n");
    return(0);
}