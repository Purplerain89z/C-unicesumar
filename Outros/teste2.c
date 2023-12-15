#include <stdio.h>

int fibonacci(int x){
    if (x == 0 || x == 1)
    return x;
    else 
    return fibonacci(x-2)+fibonacci(x-1);
}

int main(){
    int num, resposta;
    printf("Digite o numero: ");
    scanf("%d",&num);
    resposta = fibonacci(num);
    printf("O Fibonacci é %d\n",resposta);
}