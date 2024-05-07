#include <stdio.h>
#include <stdlib.h>
//enfileirar(push_back)
#define tamanho 3

struct tipo_fila
{
int dados[tamanho];
int ini;
int fim;
};

struct tipo_fila fila;

//enfilerar o objeto

void enfileirar(int elemento){
    if (fila.fim == tamanho){
        printf ("Fila Cheia.\n");
        system("pause");
    }
    else{
        fila.dados[fila.fim] = elemento;
        fila.fim++;
    }
}

//desenfilerar(pop)
int desenfileirar(){
    int elemento;
    if (fila.fim == fila.ini){
        printf("Fila Vazia.\n");
        system("pause");
    }else{
        elemento = fila.dados[fila.ini];
        for(int i=0; i<tamanho;i++)
        fila.dados[i] = fila.dados[i+1];
        fila.dados[fila.fim] = 0;
        fila.fim--;
        return elemento;
    }
}