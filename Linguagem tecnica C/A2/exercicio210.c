#include <stdio.h>

int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d",&num);
    if (num % 3 == 0 && num % 7 == 0 ){
        printf("O numero %d, ne divisivel por 3 e 7.",num);
    }else{
        printf("O numero %d, não é divisivel por 3 e 7.");
    }
    return(0);
}