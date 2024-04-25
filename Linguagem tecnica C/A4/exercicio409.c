#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorA[10];
    int i;
    for (i=0;i<10;i++){
        printf("Digite o %d elemento do vetor:\n", i);
        scanf("%d",&vetorA[i]);

    }
    printf("Vetor preenchidoz\n");
    for (i=0;i<10;i++){
        printf("o elemento da posição %d é: %d\n",i,vetorA[i]);
    }
    return(0);
}