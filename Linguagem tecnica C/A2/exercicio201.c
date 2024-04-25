#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "");

    float raiz;
    int quadrado, num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        raiz = sqrt (num);
        printf("O Numero %d é par.\n", num);
        printf("A raiz quadrada é %.3f", raiz);
    } 
    else{
        quadrado = num * num;
        printf ("O numero %d é impar.\n", num);
        printf ("O quadrado é %d", quadrado);
    }

    return(0);

}