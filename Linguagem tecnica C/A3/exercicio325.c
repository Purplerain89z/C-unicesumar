#include <stdio.h>

int main(){
    int i, reptir;
    char frase [60];

    printf("Informe a frase a ser repitida:\n");
    scanf("%s",&frase);
    printf("Informe quantas vezes ela deve ser repitida:\n");
    scanf("%d",&reptir);

    for(i=0; i<= reptir;i++){
        printf("%s\n", frase);
    }

    return(0);
}