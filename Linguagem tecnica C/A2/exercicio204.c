#include <stdio.h>
int main(){
    int idade;
    float mens;
    char nome[30];

    printf("\ninforme seu nome: ");
    scanf("%s",&nome);
    printf("Infome sua idade: ");
    scanf("%d",&idade);


    if (idade < 19){
        mens = 50;
    }else if (idade > 18 && idade < 30){
        mens = 70;
    }else if (idade > 29 && idade < 46){
        mens = 90;
    }else if (idade > 45 && idade < 66){
        mens = 130;
    }else{
        mens = 170;
    };
    printf("Nome: %s\nIdade:%d\nValor do plano: %.2f", nome,idade,mens);
    return(0);
}


