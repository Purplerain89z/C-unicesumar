#include <stdio.h>

int main(){
    int num = 0;
    while (num <=30){
        if (num % 3 == 0 && num % 7 == 0){
            printf("%d ", num);
        }
        num++;
    }
    return(0);
}