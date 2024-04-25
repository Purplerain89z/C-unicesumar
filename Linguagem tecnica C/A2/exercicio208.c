#include <stdio.h>

int main(){
    int num;
    printf ("Infome um numero: ");
    scanf("%d",&num);
    if ( num % 5 == 0)
        printf("O numero %d é divisivel por 5.",num);
    else
        printf("O numero %d não é divisivel por 5.",num);
        return(0);
}