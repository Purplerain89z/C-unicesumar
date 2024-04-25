#include <stdio.h>

int main(){

    int idade, npessoas;
    float altura, somaa, somai;
    char sexo;
    somaa = 0;
    somai = 0;
    npessoas = 0;
    printf("Informe a idade:\n");
    scanf("%d", &idade);
    while (idade !=0){
        printf("Informe a Altura\n");
        scanf("%f", &altura);
        npessoas++;
        somaa = somaa + altura;
        somai = somai + idade;
        printf("Informe a idade: \n");
        scanf("%d", &idade);
    }
        printf("A Media da altura é de %.2f", somaa / npessoas);
        printf("A media de idade é de %.2f.", somai / npessoas);

    return(0);
}