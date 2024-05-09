#include <stdio.h>
#include <stdlib.h>

typedef struct NO
{
   int dado;
   struct NO* prox;
}NO;

typedef struct PILHA
{
    NO* topo;
}PILHA;

PILHA *p;

void empilha(){
    NO* ptr = (NO*)malloc(sizeof(NO));
    ptr->dado = rand()%100;
    ptr->prox = p ->topo;
    p->topo = ptr;
}

//desempilhar pop()
// int desempilhar(){
//     NO* ptr = p->topo;
//     int dado;
//     if(ptr !=NULL){
//         p->topo = ptr->prox;
//         ptr->prox = NULL;
//         dado = ptr->dado;
//         free(ptr);
//         return dado;
//     }
// }