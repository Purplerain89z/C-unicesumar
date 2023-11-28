#include <stdio.h>

int main(){
    int op;
    float salario, aumento;
    char cargo[20];

    printf("Digite o codigo do cargo:\n");
    printf("[1] - Servente\n[2] - Pedreiro\n[3] - Meste de obras\n[4] - Técnico de segurança\n");
    scanf("%d",&op);
    printf("Digite seu salario: ");
    scanf("%f",&salario);

    switch (op)
    {
    case 1:
        strcpy(cargo , "Servente");
        aumento = ((salario * 40) / 100);
        salario = salario + aumento;
        break;
    case 2:
        strcpy(cargo,"Pedreiro");
        aumento = ((salario * 35) / 100);
        salario = salario + aumento;
        break;
    case 3:
        strcpy(cargo,"Mestre de Obras");
        aumento = ((salario * 20) / 100);
        salario = salario + aumento;
        break;
    case 4:
        strcpy(cargo, "Técnico de segurança");
        aumento = ((salario * 10) / 100);
        salario = salario + aumento;
        break;        
    default:
        break;
    }
    printf("Seu cargo %s, teve aumento de %.2f, seu novo salario é de %.2f.",cargo,aumento, salario);
}