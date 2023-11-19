#include <stdio.h>

int main(){
    float num1, num2, resultado;
    int op;

    printf("Digite o primeiro numero:");
    scanf("%f", &num1);
    printf("Digite o segundo numero:");
    scanf("%f", &num2);
    printf("\n Selecione a opção apra o calculo:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\nDigite a opção desejada:");
    scanf("%d", &op);
    
    if (op == 1)
    {
        resultado = num1 + num2;
        printf ("A soma é %.2f.", resultado);
    }else{
        if(op == 2){
            resultado = num1 - num2;
            printf ("A Subtração é %.2f.", resultado);
        }else{
            if (op == 3){
                resultado = num1 * num2;
                printf("A multiplicação é %.2f.", resultado);
            }else{
                if (op == 4){
                    resultado = num1 / num2;
                    printf("A divisão é %2.f.", resultado);
                }else{
                    printf("Opção Invalida.");
                }
            }
        }
    }
    
    return(0);
}