//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 20

//Estrutura da Senha
//armazena caracter e numero para formar a senha
typedef struct tsenha
{
    int numero;
    char tipo;
}tsenha;

//Estrutura da Fila
//usa os elementos da tsenha para formar a senha
struct tfilabanco
{
    tsenha dados[tamanho];
    int ini;
    int fim;
};

//variaveis globais
struct tfilabanco fila;
int op, proximo;

//prototipação
void fila_entra();
void fila_sair();
void fila_mostrar();
void menu_mostrar();

//Função Principal
int main(){
    setlocale(LC_ALL,"Portuguese");
    op = 1;
    proximo = 1;
    fila.ini = 0;
    fila.fim = 0;
    while (op != 0){
        system("cls");
        fila_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch(op) {
            case 1:
            fila_entrar();
            break;
            case 2:
            fila_sair();
            break;
        }
    }
    return(0);
}
//Adicionar um Elemento no final da fila
void fila_entrar(){
    if (fila.fim == tamanho){
        printf("\n A fila está cheia, Volte outro dia!\n\n");
        system("pause");
        return;
    }

    char tipo;
    printf("\nEscolha o tipo do atendimento:");
    printf("\nC- Comun");
    printf("\nP - Prioridade");
    printf("\nR - Rápido;");
    scanf("%c", &tipo);
    if (tipo != 'C' && tipo !='P' && tipo !='R'){
        printf("Tipode de Atendimento Inválido\n\n");
        return;
    }
    fila.dados[fila.fim].tipo = tipo;
    fila.dados[fila.fim].numero = proximo;
    //um gera a senha e o outro coloca a senha gerada no fim da fila.
    proximo++;
    fila.fim++;
}

//Retirar o primeiro elemento da Fila de acordo com o caixa
//algoritimo que forma a fila
void fila_sair(){
    if (fila.ini == fila.fim){
        printf("\nFila Vazia, Mas Logo aparece alguém\n\n");
        system("Pause");
    }else {
        int caixa;
        char tipoatendimento;
        printf("\nQual Caixa vai atender (1 a 4)?");
        scanf("%d", &caixa);
        //swichcase que define a a senha coforme a nescessidade do cliente
        switch (caixa)
        {
        case 1:
            tipoatendimento = 'P';
            break;
        case 2 :
        case 3:
            tipoatendimento = 'C';
            break;
        case 4: 
            tipoatendimento = 'R';
            break;
        default:
        printf("\n Valor Inválido");
            break;
        }
        //define a posição do elemento a ser removido como 0
        int posicao = 0;

        //procura elemento do tidpo correspondente
        //procura da senha especifica do atendimento caso não tenha ele atende o proximo.
        for (int i = 0; i< tamanho; i++){
            if (fila.dados[i].tipo == tipoatendimento){
                posicao = i;
                break;
            }
        }
         printf("\n\n###### ATENDIMENTO #########\n");
         printf("Senha: %c-%d\n", fila.dados[posicao].tipo, fila.dados[posicao].numero);
         printf("Caixa: %d\n", caixa);
         printf("###### ATENDIMENTO #########\n\n");

         // Retira elemento da posição e move os demais
         for (int i = posicao; i< tamanho; i++){
            fila.dados[i].numero = fila.dados[i+1].numero;
            fila.dados[i].tipo = fila.dados[i+1].tipo;
         }
         fila.dados[fila.fim].numero = 0;
         fila.dados[fila.fim].tipo = ' ';
         fila.fim--;
    }
}
//Mostrar o conteúdo da Fila
void fila_mostrar(){
    int i;
    printf("[");
    for (i=0; i < tamanho;i++);
}
//Mostrar o menu de opções
void menu_mostrar(){
    printf("\nEscolha uma opção\n");
    printf("1 - Nova Senha\n");
    printf("2 - Atender\n");
    printf("0 - Sair\n");
}