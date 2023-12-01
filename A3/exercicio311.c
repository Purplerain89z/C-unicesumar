#include <stdio.h>

int main(){
    int nnotas, codAlu, i, nAprovados, nReprovados;
    float nota,soma ,media;

    nAprovados = 0;
    nReprovados = 0;


    printf("Informe o a quantidade de notas: ");
    scanf("%d",&nnotas);
    printf("Informe o codigo do aluno: ");
    scanf("%d", &codAlu);

    while (codAlu != 0){
        soma = 0;
        for (i=1; i <= nnotas; i++){
            printf("Informe a nota %d: ",i);
            scanf("%f",&nota);
            soma = soma + nota;
        }
        media = soma / nnotas;
        if (media > 5){
            nAprovados++;
        }else{
            nReprovados++;
        }
    printf("Informe o codigo do aluno: ");
    scanf("%d", &codAlu);

    }

    printf("O numero de aprovados é de %d.\n", nAprovados);
    printf("O numero de reprovados é de %d.\n", nReprovados);
    return(0);
}