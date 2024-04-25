#include <stdio.h>

int main(){
    int num=200,soma=0,i;

    for (i=1; num <= 500; i++){
        if (num % 2 != 0){
            soma = soma + num;
        }
        num++;
    }
    printf("A soma de todos os numeros impares de 200 a 500 é : %d",soma);
    return(0);
}