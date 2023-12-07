#include <stdio.h>

void tabuada(int n){
   for (int i = 1; i<=10; i++){
    printf("%d X %d = %d\n", n, i , n * i);
   }
}

int n,i;

int main(){
    for (n = 1; n <= 10; n++){
        printf("A Tabuada de %d é:\n",n);
        tabuada(n);
        printf("\n");
    }
}