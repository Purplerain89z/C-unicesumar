#include <stdio.h>
#include <math.h>
#include<stdlib.h>

// int main()
// {
//             float num;
//             printf("Digite o número: ");
//             scanf ("%d", &num);
//             printf("\n O antecessor é: %.0f", num-1.0);
//             printf("\n O sucessor é: %.0f", num+1.0);
//             return (0);
// }
int *p;
int x;
int main(){
    x = 10;
    p = &x;
    x = 20;
    *p = 30;

    printf("x: %d\n", x);
    printf("p: %d",p);
}