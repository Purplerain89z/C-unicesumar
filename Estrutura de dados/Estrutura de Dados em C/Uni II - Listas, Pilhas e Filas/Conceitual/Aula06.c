// filas primeiro que entrar é o primeiro a sair
#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_fila
{
    int dados[tamanho];
    int ini;
    int fim;
};

struct tipo_fila fila;

//enfileirar (push_beck)
void enfileirar( int elemento){
    if(fila.fim == tamanho){
        printf("Fila cheia.\n");
        system("pause");
    }else{
        fila.dados[fila.fim] = elemento;
        fila.fim++;
    }
}

//desenfileirar(pop)
int desenfileirar(){
    int elemento;
    if(fila.fim == fila.ini){
        printf("Fila Vazia.\n");
        system("pause");
    }
    else{
        elemento = fila.dados[fila.ini];
        for(int i=0; i<tamanho; i++)
            fila.dados[i] = fila.dados[i+1];
            fila.dados[fila.fim] = 0;
            fila.fim--;
            return elemento;
    }
}