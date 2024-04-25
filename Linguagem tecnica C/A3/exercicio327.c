#include <stdio.h>

int main(){
    int idade, sexo, estadoc, masc = 0, femi = 0, solteiro = 0, casado = 0,divorciad = 0, viuv= 0, pess=0, nid=0, idadet=0,pesot = 0;
    float peso;


    printf("Informe a sua idade: ");
    scanf("%d",&idade);
    system("cls");
    while(idade !=0){
        pess++;
        idadet+= idade;
        printf("Infome seu peso: ");       
        scanf("%f",&peso);
        pesot += peso;
        system("cls");
        printf("informe seu sexo com 1, 2 ou 3\n1- Masculino \n2-Feminino \n3 - Nao me identificar ");
        scanf("%d",&sexo);
            if (sexo == 1){
                masc++;
        }else if(sexo == 2){
            femi++;
        }else if(sexo == 3){
            nid++;
        }
        else{
                printf("opção invalida.");
            }
            system("cls");
        printf("Informe seu estado civil\n com o numero especifico\n1 - Solteiro\n2 - Casado\n3 - Divorciado\n4 - Viuvo(a)\nDigite a o numero deacordo coms eu estado civil: ");
        scanf("%d", &estadoc);
            if(estadoc == 1){
                solteiro++;
            }else if(estadoc == 2){
                casado++;
            }else if(estadoc == 3){
                divorciad++;
            }else if(estadoc == 4){
                viuv++;
            }else{
                printf("opção invalida.");
            }
            system("cls");

        printf("Dados Salvos!!");
        printf("=====================================================");
        system("cls");
        while (getchar() != '\n');
        printf("Informe a sua idade: ");
        scanf("%d",&idade);
        
    }
    printf("\nO numero de pessoas é : %d\nNumero de pessoas do sexo masc: %d\nNumero de pessoas do sexo feminimo: %d\nNumero de pessoas que não quis se identificar: %d",pess,masc,femi,nid);
    printf("\nNumero de pessoas casadas: %d\n Numero de pessoas solteiras: %d\n Numero de pessoas Divorciadas: %d\nNumedo de pessoas viuvas: %d");
    printf("\nA media de pesso é %.2f.",pesot/pess);
    printf("\nA media de idade é %.2f.",idadet/pess);

    return(0);
}