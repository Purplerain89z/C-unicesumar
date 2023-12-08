#include <stdio.h>

int main(){
    int num = 200, soma = 0;
    while (num <= 500){
        if(num % 2 != 0){
            soma += num;            
        }
        num++;
    }
    return(0);
}