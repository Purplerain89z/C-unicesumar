#include <stdio.h>

int main(){
    float peso,altura;
    char sexo;

    printf("informe seu sexo \n[M]asculino [F]eminino: ");
    scanf("%s", &sexo);
    printf("Informe a sua Altura: ");
    scanf("%f", &altura);
    if (sexo == 'm' || sexo == 'M'){
        peso = (72.7 * altura) - 58;
    }else if (sexo == 'f' || sexo == 'F'){
        peso = (62.1 * altura) - 44.7;
    }else{
        printf("dados incorretos");
        return(1);
    }
    printf ("O sexo é: %c\n", sexo);
    printf ("A altura é: %.2f\n", altura);
    printf ("O peso ideal é: %.2f\n", peso);
 return (0);

}