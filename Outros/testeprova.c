#include <stdio.h>
#include <string.h>

void lerNome(){
    char nome[10];
    printf("Digite o nome:");
    gets(nome);
}
int main(){
    lerNome();
    printf("\n%s",nome);

    return(0);
}