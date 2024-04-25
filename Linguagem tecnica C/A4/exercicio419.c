#include <stdio.h>

int main(){
    int vetor[30];
    int i;
    
    for (i=0;i<30;i++){
        printf("Digite o %d elemento:",i);
        scanf("%d", &vetor[i]);
    }
    for (i=29;i>0;i--){
        printf("\n%d",vetor[i]);
    }
    return(0);
}