#include <stdio.h>
#include <string.h>
int main(){
    char nome [80], sobrenome[80];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobrenome);
    strcat(nome, sobrenome);
    printf("Após concatenarmos as strings temos que o nome é : %s\n",nome);
    if(strstr(sobrenome,nome) == 0){
        printf("Agora o sobrenome está contido na variavel nome.\n");
    }
    strlwr(nome);
    printf("O nome em minusculo é: %s\n",nome);
    strupr(nome);
    printf("O nome em maiusculo é: %s\n", nome);
    return(0);
}