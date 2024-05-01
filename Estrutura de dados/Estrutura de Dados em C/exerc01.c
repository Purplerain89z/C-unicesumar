#include <stdio.h>
#include <stdlib.h>

int main(){
int *x;

x = (int *) malloc(sizeof(int));

*x = 42;

printf("Enderenço: %p\nValor: %d", x,*x);

}