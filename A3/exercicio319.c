#include <stdio.h>

int main(){
    int n;
    double s = 0.0;

    printf("Digite o numero de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++ ){
        s += 1.0/i;
    }
    printf("O valor de S para n=%d é: %lf",n,s);
}