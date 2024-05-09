#include <stdio.h>
#include <stdlib.h>

struct NO
{
    int dado;
    struct NO* prox;    
};


void imprimir(struct NO* ptr){
    system("cls");
    while(ptr !=NULL){
        //struct ponteiro se usa  "->"
        printf("%d",ptr->dado);
        ptr = ptr->prox;
    }
}
