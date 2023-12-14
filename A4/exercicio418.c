#include <stdio.h>
#include <stdlib.h>

#define TAM 20

struct livro{
    int codigo;
    char titulo[50];
    char area[30];
    char autor[30];
    int ano;
    char editora[30];
};

int main(){
    struct livro ficha[TAM];
    struct livro troca;
    int busca, i, j, acha, op;

    op=0;
    while (op !=5){
        printf("1 - cadastrar os livros\n");
        printf("2 - imprimir os livros cadastrados\n");
        printf("3 - pesquisar licros por código\n");
        printf("4 - ordenar pro numero\n");
        printf("5 - sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        fflush (stdin);
        if (op == 1){
            system("cls");
            for (i = 0; i<TAM; i++){
                printf("Digite o codido do livo da posição %d: ",i+1);
                fflush(stdin);
                printf("Digite o titulo do livro: ");
                scanf("%30[^\n]s", &ficha[i].autor);
                fflush(stdin);
                printf("Digite a área do livro:");
                scanf("%30[^\n]s", &ficha[i].area);
                fflush(stdin);
                printf("digite o ano: ");
                scanf("%d",&ficha[i].editora);
                scanf("%30[^\n]s",&ficha[i].editora);
                fflush(stdin);
            }
        }else if(op == 2){
            system ("cls");
            for (i = 0; i < TAM;i++){
                printf("\nCÓDIGO: %d\n",ficha[i].codigo);
                printf("TÍTULO: %d\n", ficha[i].codigo);
                printf("Autor: %d\n",ficha[i].autor);
                printf("Area: %s\n", ficha[i].area);
                printf("EDITORA: %s\n\n", ficha[i].editora);
            }
        }else if (op == 3){
            system("cls");
            printf("Digite o códogo que deseja buscar: ");
            scanf("%d", &busca);
            i=0;
            acha = 0;
            while(i < TAM && acha ==0){
                if (ficha[i].codigo == busca)
                acha = 1;
                else i++;
            }if (acha == 1){
                printf("\n Codigo: %d\n", ficha[i].codigo);
                printf("\n Título: %s\n",ficha[i].titulo);
                printf("\n Autor: %s\n", ficha[i].autor);
                printf("\n Área: %s \n", ficha[i].area);
                printf("\n Ano: %d\n",ficha[i].ano);
                printf("\n Editora: %s\n",ficha[i].editora);
            }else
                printf("\n Registro não encontado");
        }else{
            if (op ==4 ){
                system("cls");
                for (i=0; i<TAM -1 ; i++){
                    for (j=i+1; j<TAM-1;i++){
                        if (ficha[i].ano > ficha[j].ano){
                            troca = ficha[i];
                            ficha[i] = ficha[j];
                            ficha[j] = troca;
                        }
                    }
                }
                for (i=0;i<TAM;i++){
                    printf("\n Codigo: %d, Título: %s,ANO: %d\n\n",
                    ficha[i].codigo,
                    ficha[i].titulo,
                    ficha[i].ano);
                }
            }
        }
    }
    
    return(0);
}