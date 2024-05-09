#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int dado;
    struct NO* prox;
}NO;

typedef struct FILA
{
    NO* inicio;
    NO* fim;
}FILA;

FILA *f;

void enfileira(){
    NO* ptr = (NO*) malloc(sizeof(NO));
    ptr->dado = rand()%100;
    ptr->prox = NULL;
    if(f->inicio == NULL)
        f->inicio = ptr;
        else
        f->fim->prox = ptr;
    f->fim = ptr;    
}

//Desenfileirar

// int desenfileirar(){
//     NO* ptr = f->inicio;
//     int dado;
//     if ptr != NULL{
//         f->inicio = ptr->prox;
//         ptr -> prox = NULL;
//         dado = ptr->dado;
//         free(ptr);
//         return dado;
//     }
// }