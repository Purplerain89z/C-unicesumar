#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int qtfilho, habit;
    float salario, somas, somaf, msalario;
    habit = 0;
    somaf = 0;
    somas = 0;
    msalario = 0;
    printf("Informe o salario:\n");
    scanf("%f", &salario);

    while (salario != -1){
        printf("Informe o numero de filhos:\n");
        scanf("%d", &qtfilho);
        habit++;
        if (salario > msalario){
            msalario = salario;
            }
            somaf = somaf + qtfilho;
            somas = somas + salario;
            printf("Informe o salário:\n");
            scanf("%f", &salario);
        
    }
        printf("A medeia salarial é : %.2f\n", somas / habit);
        printf("A media de filhos é : %.2f\n", somaf / habit );
        printf("O maior salario é : %.2f\n", msalario);
    return(0);
}