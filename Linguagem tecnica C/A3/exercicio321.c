#include <stdio.h>

int main(){
    int n, i;

    for(i = 1; i<= 10; i++){
        printf("\nA tabuada de %d e :\n", i);
        for (n = 1; n <= 10; n++){
            printf("%d X %d = %d",i,n, i * n);
            printf("\n");
        }
    }
    return(0);
}