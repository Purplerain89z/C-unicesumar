#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;
    int num, numDigitado;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    numDigitado = num;

    while (num > 0){
        num = num - 2;
            i++;
    }

    printf("O numero 2 pode ser subtraido de %d, o total de %d vezes.",numDigitado, i);

    return(0);
}