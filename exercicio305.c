#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma=0, valor,i=0;
    
    while (soma <= 100){
        printf("Digite um valor inteiro:\n");
        scanf("%d", &valor);
        soma = soma + valor;
        i++;
    }
    printf("Você Incrementrou o valor %d, vezes o total foi de %d", i, soma);
    return(0);
}