#include <stdio.h>
#include <string.h>

int main(){
    char op[30];
    float comprimento=0, largura=0, totall,totalc;
    int comodo = 0;

    printf("Informe o comodo que quer medir: ");
    scanf("%s", op);

    while (strcmp(op, "FIM") !=0){
        comodo++;
        printf("\nInforme a largura: ");
        scanf("%f",&largura);
        totall += largura;
        printf("\nInforme o comprimento: ");
        scanf("%f", &comprimento);
        totalc += comprimento;
    printf("\nInforme o comodo que quer medir: ");    
    scanf("%s", op);
    }
    printf("\nO total de comodo é %d.",comodo);
    printf("\nA area total da casa é: %2.f.",totall * totalc);
    return(0);
}