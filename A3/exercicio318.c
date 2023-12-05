#include <stdio.h>

int main(){
    int num, nNum = 0, mNum = 0, meNum = 0, soma = 0, par = 0, impar = 0;

    printf("Informe um numero:");
    scanf("%d", &num);



    while (num != 0){
        nNum++;
        soma = soma + num;
        if (num % 2 == 0){
            par++;
        }else{
            impar++;
        }
        if (num > mNum){
            mNum = num;
        }else if(num < meNum){
            mNum = num;
        }

    printf("Informe um numero:");
    scanf("%d", &num);   

    }
    printf("A media dos valores é %.2f.\n", (float)soma/nNum);
    printf("O maior valor é %d\n",mNum);
    printf("o Menor numero é %d\n", meNum);
}