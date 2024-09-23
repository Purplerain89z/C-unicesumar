#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int numero;
    
    srand(time(NULL));
    printf("Numeros Aleatorios para Mega\n");
    for (int i=1; i< 7; i++){
        numero = rand() % 60 + 1;
        printf("%d- %d\n", i,numero);
}
return 0;
}