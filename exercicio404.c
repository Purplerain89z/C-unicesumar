#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};{
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
        printf("%d", A[i][j]);
        }
    printf("\n");
    }
    return(0);
}
}
/*Aula 19*/