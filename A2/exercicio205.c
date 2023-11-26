#include <stdio.h>

int main(){
    int idade;

    printf("Verificador de classe eleitoral\n");
    printf("Informe a sua idade: ");
    scanf("%d",&idade);

    if (idade < 17 ){
        printf("Menor de idade.");        
    }else if (idade > 17 && idade < 66){
        printf("Eleitor obrigatório.");
        }else {
            printf("Eleitor facultativo.");
        }
        return(0);
    }