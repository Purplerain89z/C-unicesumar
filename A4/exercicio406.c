#include <stdio.h>
#include <stdlib.h>

struct produto{
    int codigo;
    char nome[50];
    int quantidade;
    float valor_compra;
    float valor_venda;
};

struct produto prod[100];
int quantprod = 0;

void Listar(){
    int i;
    for (i=0; i < quantprod; i++){
        printf("=============================\n");
        printf("Codigo do produto: %d\n", prod[i].codigo);
        printf("Quantidade em estoque: %d\n", prod[i].quantidade);
        printf("O valor de compra é de: %.2f\n", prod[i].valor_compra);
        printf("O valor de venda é de: %.2f\n", prod[i].valor_venda);
    }

}


void Cadastrar(){
    
        printf("Digite o codigo do produto: ");
        scanf("%d", &prod[quantprod].codigo);
        printf("Digite o a quantidade: ");
        scanf("%d", &prod[quantprod].quantidade);
        printf("Digite o valor de compra: ");
        scanf("%f", &prod[quantprod].valor_compra);
        printf("Digite o valor de venda: ");
        scanf("%f", &prod[quantprod].valor_venda);

        quantprod++;
    
}

int main(){
    int op;


    do{
    printf("Digite a opçãod desejada: \n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Listar produtos cadastrados\n");
    printf("3 - Sair\n");
    scanf("%d", &op);
    fflush(stdin);

    switch (op){
        case 1: 
        system("cls");
        Cadastrar();        
        break;
        case 2:
        system("cls");
        Listar();
        break;
        case 3:
        system("cls");
        printf("Saindo do programa...");
        break;
        default:
        printf("Opção invalida.");
        break;
    }
    }while (op != 3);
    return(0);
}