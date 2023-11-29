#include <stdio.h>

int main(){
    int num[5],i;

    printf("Informe cinco numeros:\n");
    for (i=0; i < 5; i++ ){
    scanf("%d",&num[i]);
    }
    for (i=0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    
}