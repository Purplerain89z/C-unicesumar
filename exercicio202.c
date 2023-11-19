#include <stdio.h>

int main(){
    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);
    printf("digite o segundo número:\n");
    scanf("%f", &num2);
    printf("Esclha a operação:\n1- soma \n2- Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
            resultado = num1 + num2;
            printf("A soma dos numeros %.2f e %.2f é %.2f.", num1, num2, resultado);
        break;
    case 2:
            resultado = num1 - num2;
            printf("A Subtração do numero %.2f e %.2f é %.2f.", num1, num2, resultado);
            break;
    case 3: 
            resultado = num1 * num2;
            printf("A Multiplicação dos numeros %.2f e %.2f é %.2f.", num1, num2, resultado);
    case 4:
            resultado = num1 / num2;
            printf("A divisão do numero %.2f por %.2f é %.2f.", num1, num2, resultado); 
            break;               
    default:
            printf("Opção invalida");
        break;
    }
    return(0);
}