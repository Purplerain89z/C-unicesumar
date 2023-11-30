#include <stdio.h>
int main(){
    int par, impar, num;

    par = 0;
    impar = 0;

    do{
        printf("Informe o numero: ");
        scanf("%d",&num);
        if (num % 2 == 0)
        par ++;
        else 
        impar++;
    }
    while (num != 0);
    printf("A quantidade de numeros par é: %d.\n",par);
    printf("A quantidade de numeros impar é de: %d.\n",impar);
    return(0);    
}