#include <stdio.h>

int main(){
    int op;
    float total;

printf("Escolhan a opção de bebida:\n 1 - Italiano\n2 - Japonês\n3 - Salvadorenho\n");
scanf("%d",&op);
    switch (op)
    {
    case 1:
        total = total + 750;
        break;
    case 2:
        total = total + 324;
        break;
    case 3:
        total = total + 545;    
        break;
    }
    printf("Escolha a opção de bebida:\n1 - Chá\n2 - Suco de Laranja\nRefrigerante\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        total = total + 30;
        break;
    case 2:
        total = total + 80;  
        break;  
    case 3:
        total = total + 90;
        break;
    }
    printf("O total de calorias é de %.2f", total);
    return (0);
}