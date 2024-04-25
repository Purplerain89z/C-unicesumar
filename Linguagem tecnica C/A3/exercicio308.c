#include <stdio.h>

int main(){
    int par,impar,num;

    par = 0;
    impar = 0;
    printf("Digite o numero: ");
    scanf("%d",&num);

    while (num !=0){
        if (num % 2 == 0){
            par++;

        }else{
            impar++;
        }

    printf("Digite o numero: ");
    scanf("%d",&num);

    }
    printf("A quantidade de numeros pares digitadas foi %d",par);
    printf("\nA quantidade de numeros impares digitadas foi %d",impar);
    return(0);
}