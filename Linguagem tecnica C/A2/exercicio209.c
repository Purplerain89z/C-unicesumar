#include <stdio.h>

int main() {
    int num[5];
    int i, j, temp;

    for (i=0;i  <5;i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4 -1; j++){
            if (num[j] > num[j + 1]){
                    temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }

        }
        printf("Os numeros digitados em ordem são: ");
        for (i = 0; i < 5; i++){
            printf("%d ",num[i]);
        }
        
    return(0);
}