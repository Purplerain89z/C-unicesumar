#include <stdio.h>
#include <math.h>

int main()
{
            float num;
            printf("Digite o número: ");
            scanf ("%d", &num);
            printf("\n O antecessor é: %.0f", num-1.0);
            printf("\n O sucessor é: %.0f", num+1.0);
            return (0);
}