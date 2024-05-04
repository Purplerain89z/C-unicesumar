#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//constante
#define tamanho 5

//estrutura pilha
struct tpilha{
    int dados[tamanho];
    int ini;
    int fim;
};

//variáveis flobais
struct tpilha pilha;
int op;

//Protipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//função pincipal
int main(){
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    while (op != 0)
    {
    system("cls");
    pilha_mostrar();
    menu_mostrar();
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        pilha_entrar();
        break;
    case 2:
    pilha_sair();
        break;
    }
    }
    return(0);
}

//Adicionar um elemento no final da pilha

void pilha_entrar(){
    if (pilha.fim == tamanho){
        printf("\nA pilha está cheia, impossível empilhar!\n\n");
        system("pause");
    }
    else{
        printf("\n Digite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++;
    }
}

//Retirar o último elemento da pilha
void pilha_sair(){
    if (pilha.ini == pilha.fim){
        printf("\nA pilha está vazia, impossível desempilhar!\n\n");
        system("Pause");
    }else{
        pilha.dados[pilha.fim-1] = 0;
        pilha.fim--;
    }
}

//mostrar conteúdo da pilha
void pilha_mostrar(){
    int i;
    print("[ ");
    for (i = 0; i < tamanho; i++){
        print("%d ", pilha.dados[i]);
    }
    printf("]\n\n");
}

//mostrar o menu de opções
void menu_mostrar(){
    printf("\n Esolha uma opção:\n");
    print("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
}