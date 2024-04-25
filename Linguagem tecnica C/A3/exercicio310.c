#include <stdio.h>

int main() {
    float nota, media, soma;
    int codAlu, nAprovados, nReprovados, i, nnota;

    nAprovados = 0;
    nReprovados = 0;

    printf("Informe numeros de notas: ");
    scanf("%d", &nnota);

    do {
        printf("Informe o codigo do aluno:");
        scanf("%d", &codAlu);
        soma = 0;

        if (codAlu != 0) {
            for (i = 1; i <= nnota; i++) {
                printf("Informe a %d nota do aluno:\n", i);
                scanf("%f", &nota);
                soma = soma + nota;
            }

            media = soma / nnota;

            if (media < 6)
                nReprovados++;
            else
                nAprovados++;
        }
    } while (codAlu != 0);

    printf("O numero de Aprovados é: %d.\n", nAprovados);
    printf("O numero de reprovados é: %d\n", nReprovados);

    return 0;
}
