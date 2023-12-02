#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int num,i,qtdade;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    qtdade = 0;

    for (i=1; i <= num; i++){

        if(num % i == 0){
            qtdade ++;
            }
        }

        if (qtdade == 2){
            printf("%d e um numero é primo.\n",num);
            }
        else{
            printf("%d nao é um primo.\n",num);
        }
    return(0);
}