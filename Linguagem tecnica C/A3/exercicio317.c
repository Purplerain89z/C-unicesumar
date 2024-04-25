#include <stdio.h>

int main(){
    int idade, npessoas, npessoasi, npessoass, opniao;
    float somai, media;
    somai = 0;
    npessoas = 0;
    npessoass = 0;
    npessoasi = 0;
    printf("Informe a idade:\n");
    scanf("%d", &idade);
    while (idade != 0){
        do{    
        printf("Informe seu grau de satisfação\n[1] - Satisfatorio\n[2] - indiferente\n[3] - Insatisfeito\n");
        scanf("%d", &opniao);
        }while (opniao != 1 && opniao !=2 && opniao != 3);
        npessoas++;
        if (opniao == 1){
            somai = somai + idade;
            npessoass++;
        }else if(opniao == 3){
            somai = somai + idade;
            npessoasi++;
        }
        printf("Infome a idade:\n");
        scanf("%d", &idade);
    }
    media = (somai/npessoass);
    printf("O numero de pessoas insatisfeitas é %d.\n", npessoasi);
    printf("O numero de pessoas satisfeitas é %d\n", npessoass);
    printf("A media de idade das pessoas satisfeitasé %.2f", media);
    return(0);
}